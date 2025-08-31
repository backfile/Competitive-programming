#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//

typedef long long ll;

bool esPrimo(int n) {
	if (n <= 1) return false;    // 0 y 1 no son primos
	if (n == 2) return true;     // 2 sí es primo
	if (n % 2 == 0) return false; // cualquier par > 2 no es primo
	
	// solo revisamos divisores hasta la raíz cuadrada de n
	int limite = sqrt(n);
	for (int i = 3; i <= limite; i += 2) {
		if (n % i == 0) return false; // encontramos divisor ? no primo
	}
	
	return true; // si no encontramos divisores, es primo
}

bool isTPRIME(ll a){
	double n = sqrt(a);
	if(n != (int)n){return false;}
	return esPrimo(n);
}


int main(int argc, char *argv[]) {
	ll n;
	cin >> n;
	vector<bool>rta;
	for(int i=0;i<n;i++) {
		ll a;
		cin >> a;
		rta.push_back(isTPRIME(a));
	}
	
	for(auto a : rta){
		if(a == false){
			cout << "NO" <<endl;
		}else{
			cout << "YES" << endl;
		}
	}
	
	return 0;
}

