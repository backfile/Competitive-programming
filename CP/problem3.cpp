#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://cses.fi/problemset/task/1634

vector<int>dp; 
vector<int>monedas_valores;

void findminimun(int indice){
	int minimo = 5000000;
	for(int i=0;i<monedas_valores.size();i++) { 
		int valor_moneda = 	monedas_valores[i];
		if(valor_moneda > indice){
			continue;
		}

		int minimo_aux = dp[indice-valor_moneda] + 1;
		if(minimo_aux < minimo){
			minimo = minimo_aux;
		}
	}
	
	dp[indice] = minimo;
}

int main(int argc, char *argv[]) {
	int numero;
	int cant_monedas;
	cin >> cant_monedas;
	cin >> numero;
	
	for(int i=0;i<cant_monedas;i++) { 
		int a;
		cin >> a;
		monedas_valores.push_back(a);
	}
	dp = vector<int>(numero+1, 5000000); //Minimo de monedas para llegar a x
	//Paso base
	dp[0] = 0;
	for(int i=1;i<numero+1;i++) { 
		findminimun(i);
	}
	
	if(dp[numero] == 5000000){
		cout << -1;
	}else{
		cout << dp[numero];
	}
	
	
	return 0;
}

