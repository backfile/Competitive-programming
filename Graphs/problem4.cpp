#include <iostream>
#include <vector>
using namespace std;


//https://codeforces.com/gym/317667/problem/E

vector<vector<int>>ady;
vector<bool>visited;
vector<int>nodosComponente;

void dfs(int nodo){
	if(visited[nodo]){return;}
	visited[nodo] = true;
	nodosComponente.push_back(nodo);
	for(int i=0;i<ady[nodo].size();i++) { 
		if(visited[ady[nodo][i]] == true){continue;}
		dfs(ady[nodo][i]);
	}
}

int main(int argc, char *argv[]) {
	int n, m;
	cin >> n >> m;
	ady.resize(n);
	visited = vector<bool>(n, false);
	for(int i=0;i<m;i++) { 
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		ady[a].push_back(b);
		ady[b].push_back(a);
	}
	
	bool es_posible = true;
	for(int i=0;i<n;i++) { 
		if(!visited[n]){
			dfs(i);
			int nodosComponenteNumero = nodosComponente.size();
			/*cout << nodosComponenteNumero <<  " ";*/
			cout << endl;
			for(int i=0;i<nodosComponente.size();i++) { 
				if(ady[nodosComponente[i]].size() != nodosComponenteNumero-1){
//					cout << ady[nodosComponente[i]].size() << "<-- tamanio aristas vector componente" << " ";
//					cout << endl;
					es_posible = false;
					break;
				}
			}
			nodosComponente.clear();
		}
	}
		
	if(es_posible){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}

