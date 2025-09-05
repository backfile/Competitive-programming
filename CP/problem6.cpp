#include <iostream>
#include <vector>
#include <string>
using namespace std;

//https://cses.fi/problemset/task/1637

typedef long long ll;

vector<ll>dp;

void min(int numero){
	string s = to_string(numero);
	ll min = 5000000;
	int indice;
	for(int i=0;i<s.length();i++) { 
		char l = s[i];
		ll aux = l - '0';
		/*cout << aux << "<-- numero"<<endl;*/
		if(aux == 0){
			continue;
		}
		if(dp[numero - aux] < min){
			indice = aux;
			min = dp[numero - aux]; 
		}
	}
	/*cout << dp[numero - indice] << endl;*/
	dp[numero] = dp[numero - indice] + 1;
	/*cout << dp[numero - indice] << " definitivo" << endl;*/
}
	
	int main(int argc, char *argv[]) {
		ll n;
		cin >> n;
		dp = vector<ll>(n+1), 5000000;
		dp[0] = 0;
		for(ll i=1;i<n+1;i++) { 
			min(i);
		}
		
		cout << dp[n];
		return 0;
		
		
	}
	
	
