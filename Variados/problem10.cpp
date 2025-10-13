#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

//https://codeforces.com/contest/2149/problem/A

void solve() {
	int n;
	cin >> n;
	map<int, int>f;
	for(int i=0;i<n;i++) { 
		int a;
		cin >> a;
		f[a]++;
	}
	
	int ans = 0;
	if(f[-1] % 2 != 0){
		ans += 2;
	}
	ans += f[0];
	
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


