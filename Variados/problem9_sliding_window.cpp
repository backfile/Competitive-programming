#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

//https://codeforces.com/contest/2148/problem/E

void solve() {
	int n;
	cin >> n;
	vector<int>v;
	int k;
	cin >> k;
	map<int, int>f;
	for(int i=0;i<n;i++) { 
		int a;
		cin >> a;
		v.push_back(a);
		f[a]++;
	}
	
	for(auto x : f){
		if(x.second % k != 0){
			cout << 0 << endl;
			return;
		}
	}
	
	
	
	ll ans = 0;
	ll r = -1;
	map<int, int>vf;
	
	for(int l=0;l<n;l++) { 
		while(r < n-1){
			if(vf[v[r+1]] < f[v[r+1]]/k){
				vf[v[r+1]]++;
				r++;
			}
			else break;
		}
		ans += (r-l+1);
		vf[v[l]]--;
	}		
	cout << ans << endl;	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


