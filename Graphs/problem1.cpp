#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//Codeforces Problem Link  https://codeforces.com/gym/317667/problem/B


vector<vector<int>>ady; // Nodos
vector<bool>visited;
vector<int> gold;

int dfs(int nodo){
	
	int mn = gold[nodo];
	
	visited[nodo] = 1;
	for(int nod : ady[nodo]){
		if(!visited[nod]){
			mn = min(mn, dfs(nod));
		}
	}
	return mn;
}
	
int main(int argc, char *argv[]) {
	int n,m; 
	cin>>n >> m; //nodos y aristas;
	
	visited = vector<bool>(n, false);//preprarar vector visited
	ady.resize(n);

	for(int i=0;i<n;i++) { 
		int g;
		cin >> g;
		gold.push_back(g);
	}
	//Cargar lista de adyacencia
	for(int i=0;i<m;i++) { 
		int a,b;
		cin >> a >>  b;
		a--;
		b--;
		ady[a].push_back(b);
		ady[b].push_back(a);
	}
	
	int acumulador = 0;
	for(int i=0;i<n;i++) { 
		if(!visited[i]){

			acumulador += dfs(i);
			
		}
	}
	
	cout << acumulador;		
	return 0;
}

