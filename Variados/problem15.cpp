#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

//https://codeforces.com/contest/2155/problem/A


void solve() {
	int n;
	cin >> n;
	int cont = 0;
	int perdedores = 0;
	int aux;
	
	if(n%2 != 0){
		aux = (n-1)/2;
		
	}else{
		aux = n/2;	
	}
	perdedores += aux;
	n -= aux;
	cont += aux;
	
	while(perdedores != 1 or n != 1){
		
		
		if(perdedores % 2 != 0){
			aux = (perdedores-1)/2;
			perdedores -= aux;
			cont+=aux;
		}else{
			aux = (perdedores)/2;
			perdedores -= aux;
			cont+=aux;
		}
		
		if(n%2 != 0){
			aux = (n-1)/2;
			perdedores += aux;
			n -= aux;
			cont += aux;
		}else{
			aux = (n)/2;
			perdedores += aux;
			n -= aux;
			cont += aux;
		}		
	}
	cout << cont+1 <<endl;
	
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


