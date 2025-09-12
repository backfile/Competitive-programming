#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/contest/2136/problem/B

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<bool>pos1(n, false);
	vector<int>rta(n, 0);
	
	int acumulador = 0;
	int cont = 0; 
	int aux = 0;
	int indice = 0;
	bool primera_vez = true;
	for(auto x : s){
		if(x == '1'){
			acumulador ++;
			aux ++;
			rta[indice] = acumulador;
			if(primera_vez){
				cont = aux;
				primera_vez = false;
			}
		}else{
			if(aux > cont){
				cont = aux;
			}
			aux = 0;
		}
		indice++;
	}
	if(aux > cont){
		cont = aux;
	}
	
	if(cont >= k){
		cout << "NO" <<endl;
		return;
	}
	
	acumulador = acumulador +1;
	for(int i=0;i<n;i++) { 
		if(rta[i] == 0){
			rta[i] = acumulador;
			acumulador++;
		}
	}
	
	cout << "YES" << endl;
	for(auto x : rta){
		cout << x << " ";
	}
	cout << endl;
	
	
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


