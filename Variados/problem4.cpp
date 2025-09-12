#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//https://codeforces.com/contest/2140/problem/A

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int count1 = count(s.begin(), s.end(), '1');
	auto v = s.begin();
	advance(v, s.length()-count1);
	int count2 = count(v, s.end(), '0');
	
	cout << count2 << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


