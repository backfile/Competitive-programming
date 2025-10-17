#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

//https://codeforces.com/contest/2155/problem/B

void solve() {
	int n;
	cin >> n;
	int k; cin >> k;
	if((n*n - k) == 1) {
		cout << "NO" << endl;
		return;
	}
	
	vector<vector<int>>v(n, vector<int>(n, -1));
	
	cout << "YES" <<endl;
	int p = 1;
	for(int i=0;i<n;i++) { 
		for(int j=0;j<n;j++) { 
			if(k >= p){
				cout << "U";
				p++;
				v[i][j] = 1;
			}else{
				if(j == n-1){
					if(v[i][j-1] == 1){
						cout << "D" ;
					}else{
						cout << "L";
					}
				}else{cout << "R" ;}
			}
		}
		cout << endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


