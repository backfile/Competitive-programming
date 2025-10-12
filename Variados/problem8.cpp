#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/2136/problem/C

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	vector<int>v;
	map<int, int>frecuencia;
	map<int, vector<int>>posiciones;
	vector<int>dp(n, 0); // Largo mayor en la posicion i
	
	for(int i=0;i<n;i++) { 
		int a;
		cin >> a;
		v.push_back(a);
	}
	
	if(v[0] == 1){
		dp[0] = 1;
	}else{
		frecuencia[v[0]]++;
		posiciones[v[0]].push_back(0);
	}

	
	for(int i=1;i<v.size();i++) {  
		frecuencia[v[i]]++;
		posiciones[v[i]].push_back(i);
		if(frecuencia[v[i]] >= v[i]){
			if(posiciones[v[i]][(frecuencia[v[i]]-1) - (v[i]-1)] == 0){
				dp[i] = max(dp[i - 1], v[i]);
			}else{
				dp[i] = max(dp[i - 1], dp[posiciones[v[i]][(frecuencia[v[i]]-1) - (v[i]-1)] - 1] + v[i]);
			}
			
		}else{
			dp[i] = dp[i - 1];
		}
	}
	
	cout << dp[n-1]<<endl;
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		solve();
	} 
}


