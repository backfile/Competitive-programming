#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	int amigas;
	cin >> amigas;
	vector<int>tarrosAzul;
	vector<int>tarrosRojo;
	for(int i=0;i<amigas;i++) { 
		int aux;
		cin >> aux;
		tarrosRojo.push_back(aux);
	}
	for(int i=0;i<amigas;i++) { 
		int aux;
		cin >> aux;
		tarrosAzul.push_back(aux);
	}
	
	sort(tarrosAzul.begin(),tarrosAzul.end());
	sort(tarrosRojo.begin(),tarrosRojo.end());
	reverse(tarrosRojo.begin(),tarrosRojo.end());
	vector<int>final;
	int menor = tarrosAzul[1] + tarrosRojo[1];
	int mayor = tarrosAzul[1] + tarrosRojo[1];
	for(int i=0;i<amigas;i++) { 
		int aux = tarrosAzul[i] + tarrosRojo[i];
		//final.pushback(aux);
		if(aux < menor){
			menor = aux;
		}
		if(aux > mayor){
			mayor = aux;
		}
	}
	cout << mayor-menor;
	
}

