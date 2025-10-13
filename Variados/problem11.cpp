#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

//https://codeforces.com/contest/2149/problem/A

void solve() {
	int n;
	cin >> n;
	vector<int>v(n);
	for(auto &x : v){
		cin >> x;
	}
	sort(v.begin(), v.end());
	int sum = 0;
	for(int i=0;i<n-1;i+=2) { 
		if(sum < v[i+1] - v[i]) sum = v[i+1] - v[i]; 
	}
	cout << sum << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


