#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
	
	int N;
	cin >> N;
	
	//Matriz
	vector<vector<int>>matriz(N, vector<int>(N, 0));
	string entrada;
	for(int i=0;i<N;i++) {
		cin >> entrada;
		for(int j=0;j<N;j++) { 
			if(entrada[j] == 'N'){
				matriz[i][j] = 1;
			}	
		}
	}
	
	
	int contador = 0;
	for(int i=0;i<N;i++) { 
		int aux = 0;
		for(int j=0;j<N;j++) { 
			if(matriz[i][j] == 0){
				aux = 0;
			}
			if(matriz[i][j] == 1){
				aux = aux +1;
			}
			if(aux == 2){
				contador++;
				aux = 0;
			}
		}
	}
	
	cout << contador;
	return 0;
}

