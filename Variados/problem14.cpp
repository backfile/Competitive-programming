#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

//https://codeforces.com/contest/2149/problem/E

void solve() {
	ll n; cin >> n;
	ll k; cin >> k;
	ll l; cin >> l;
	ll r; cin >> r;
	
	vector<int>v(n);
	for(auto &x : v){
		cin >> x;
	}
	
	map<int, int>f;
	
	ll rc = -1;
	ll ans = 0;
	ll rc2 = -2;
	
	for(int lc=0;lc<n;lc++) { 
		while(f.size() < k and rc < n-1){
			rc++;
			f[v[rc]]++;
		}
		
		
		if(!(rc < n-1) && f.size() < k){
			break;
		}
		// RC principio de la ventana;
		
		if(rc2 < rc){
			rc2 = rc; 
		}
		
		
		while(f.count(v[rc2 +1]) && rc2 < n-1){
			rc2++;
		}
		
		//RC2 ultimo posible de la ventana
		
		
		//intervalos [RC, RC2]
		// 			[l-1+L, r-1+L]   //Debo encontrar la interseccion de ellos (Mis R VALIDOS)
		
		//Forma facil de calcular el intervalo interseccion 
		
		//(Max(RC, l-1+L), Min(RC2, r-1+L)
		
		ll comienzo = max(rc, l-1+lc);
		ll finall = min(rc2, r-1+lc);
		
		if(comienzo <= finall){
			ans += (finall - comienzo +1);
		}
		
		f[v[lc]]--;
		if(f[v[lc]] <= 0){
			f.erase(v[lc]);
		}
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


