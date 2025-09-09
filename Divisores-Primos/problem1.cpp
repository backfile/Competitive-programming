#include <bits/stdc++.h>
using namespace std;


//https://codeforces.com/contest/2137/problem/C

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	ll a, b;
	cin >> a >> b;
	if(a%2==0 && b%2==0){
		cout << (a*(b/2)) + 2<<endl;
		return;
	}
	if(a%2==0&&b%2!=0){cout <<-1<<endl; return;}
	if(a%2!=0&&b%2!=0){cout << (a*b)+1<<endl; return;}
	if(a%2==1&&b%2==0){
		if(b%4 != 0){cout<< -1<<endl;return;}
		cout << (a*(b/2)) + 2<<endl;
		return;
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


