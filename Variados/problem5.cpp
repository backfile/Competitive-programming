#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/contest/2139/problem/B

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	ll n, m;
	cin >> n >> m;
	vector<int>cakes;
	for(int i=0;i<n;i++) {
		int a;
		cin >> a;
		cakes.push_back(a);
	}
	ll rta = 0;
	sort(cakes.begin(), cakes.end());
	reverse(cakes.begin(), cakes.end());
	if(n == 1){
		cout << cakes[0]*m <<endl;
		return;
	}
	for(int i=0;i<cakes.size()-1 && m>=0;i++) { 
		rta += cakes[i] * m; 
		m--;
	}
	if(m >= 1){
		rta += cakes[n-1]*m;
		cout << rta << endl;
		return;
	}
	
	cout << rta << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


