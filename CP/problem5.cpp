#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;



int main(int argc, char *argv[]) {

	ll n, m;
	cin >> m >> n;
	
	vector<ll>monedas;
	vector<ll>dp(n+1, 0); //cantidad de formas de llegar a x con ciertas monedas;
	
	dp[0] = 1;
	
	for(ll i=0;i<m;i++) { 
		ll a;
		cin >> a;
		monedas.push_back(a);
	}
	
	
	for(ll j=0;j<monedas.size();j++) { 
		for(ll i=1;i<n+1;i++) { 
			if(monedas[j] > i){
				continue;
			}
			
			dp[i] = (dp[i] + dp[i - monedas[j]]) % 1000000007;
		}
	}
	
	
	
	cout << dp[n];
	return 0;
}

