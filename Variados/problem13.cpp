#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)
//https://codeforces.com/contest/2149/problem/D
void solve() {
	int n;
	cin >> n;
	vector<ll>a;
	vector<ll>b;
	
	string s; cin >> s;
	for(int i=0;i<n;i++) { 
		if(s[i]=='a'){
			a.push_back(i);
		}else{b.push_back(i);}
	}
	int indice1 = (a.size() / 2);
	int indice2 = (b.size() / 2);
	
	ll ans_a = 0;
	ll ans_b = 0;
	
	for(int i=0;i<a.size();i++) { 
		if(i == indice1) continue;
		ans_a += (abs(a[indice1] - a[i]) - (abs(indice1 - i)));
	}
	for(int i=0;i<b.size();i++) { 
		if(i == indice2) continue;
		ans_b += (abs(b[indice2] - b[i]) - (abs(indice2 - i)));
	}
	if(ans_a < ans_b){
		cout << ans_a << endl ;
	}else{
		cout <<ans_b << endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


