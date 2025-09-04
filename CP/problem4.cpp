#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

// https://cses.fi/problemset/task/1635

vector<ll>dp;
vector<ll>monedas;

void formas(ll indice){
	for(ll i=0;i<monedas.size();i++) { 
		if(indice < monedas[i]){
			continue;
		}
		ll aux = monedas[i];
		dp[indice] += dp[indice-aux];
	}
	dp[indice] = dp[indice] % 1000000007;
}


int main(int argc, char *argv[]) {
	ll x, n;
	cin >> n; //Cantidad de monedas
	cin >> x;
	for(ll i=0;i<n;i++) { 
		ll a;
		cin >> a;
		monedas.push_back(a);
	}
	
	dp = vector<ll>(x+1, 0);
	dp[0] = 1;
	for(int i=1;i<x+1;i++) { 
		formas(i);
	}
	cout << dp[x];
	return 0;
}

