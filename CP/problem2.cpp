#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;


//https://cses.fi/problemset/task/1633


int main(int argc, char *argv[]) {
	
	ll n;
	cin >> n;
	
	//Quiero contar la cantidad de formas de llegar a n, utilizando dados (1-6)
	vector<ll>dp(n+1); //Formas de llegar con dados a x
	//Casos bases 
	//n = 0 -> 1 (No tirar nada)
	//n = 1 -> 1 (Solo tirar el 1);
	
	
	dp[0] = 1;
	dp[1] = 1;
	
	for(ll i=2;i<=n;i++) { 
		for(ll j=1;j<=i;j++) { 
			dp[i] += (dp[i-j]);
			if(j == 6){
				break;
			}
		}
		dp[i] = dp[i] % 1000000007;
	}
	
	
	ll sol = dp[n];
	
	cout << sol;
	
	return 0;
}

