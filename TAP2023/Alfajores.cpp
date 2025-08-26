#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	 int viajes, oficinas;
	 cin >> viajes >> oficinas;
	 vector<int>cantAlfajoresViaje;
	 vector<int>cantEmpleados;
	 for(int i=0;i<viajes;i++) {
		int cant;
		cin >> cant;
		cantAlfajoresViaje.push_back(cant);  // 0 - viajes -1
	 }
	 for(int i=0;i<oficinas;i++) { 
		 int cant2;
		 cin >> cant2;
		 cantEmpleados.push_back(cant2);
	 }
	 
	 vector<int>empleadosReducido;
	 int aux = cantEmpleados[0];
	 empleadosReducido.push_back(cantEmpleados[0]);
	 
	 for(int i=1;i<cantEmpleados.size();i++) { 
		if(cantEmpleados[i] < aux){
			aux = cantEmpleados[i];
			empleadosReducido.push_back(cantEmpleados[i]);
		}
	 }
	 reverse(empleadosReducido.begin(), empleadosReducido.end());
	 
	 vector<int>SobrasPorViaje;
	 for(int i=0;i<cantAlfajoresViaje.size();i++) {
		int contResto = 0;
		int aux = cantAlfajoresViaje[i];
		vector<int>::iterator q;
		for(int j=0;j<30;j++) { 
			if(aux != 0){
				cout << "i ->" << i <<endl;
				
				q = upper_bound(empleadosReducido.begin(), empleadosReducido.end(), aux);
				q--;
				
				cout << "aux ->" << aux << endl;
				cout << "q ->" << *q <<endl;
				aux = aux % (*q);
				
			}else{
				break;
			}
		}
		SobrasPorViaje.push_back(aux);
	 }
	 
	 for(int i=0;i<SobrasPorViaje.size();i++) { 
		 cout << SobrasPorViaje[i] << " ";
	 }
	 
	return 0;
}

