#include <iostream>
#include <queue>
using namespace std;


//Link codeforces problem https://codeforces.com/gym/317667/problem/C


vector<vector<int>>ady;
vector<bool>visited;

int main(int argc, char *argv[]) {
	int n, m;
	cin >> n >> m;
	visited.resize(n,0);
	ady.resize(n);
	for(int i=0;i<m;i++) { 
		int k;
		vector<int>v;
		cin >> k;
		for(int j=0;j<k;j++) { 
			int a;
			cin >> a;
			--a;
			v.push_back(a);
		}
		for(int j=0;j+1<k;j++) { 
			ady[v[j]].push_back(v[j+1]);
			ady[v[j+1]].push_back(v[j]);
		}
		
	}
	
	
	
	vector<int>contadores;
	vector<int>valores_mostrar(n);
	
	for(int i=0;i<n;i++) {
		queue<int> q;
		q.push(i);
		while(!q.empty()){
			int valor = q.front();
			q.pop();
			if(visited[valor]){
				continue;
			}
			contadores.push_back(valor);
			visited[valor] = true;
			
			for(int a : ady[valor]){
				if(!visited[a]){
					q.push(a);
				}
			}
		}
		for(int i=0;i<contadores.size();i++) { 
			valores_mostrar[contadores[i]] = contadores.size(); 
		}
		contadores.clear();
	}
	for(int i=0;i<valores_mostrar.size();i++) { 
		cout << valores_mostrar[i] << " ";
	}
	return 0;
}

