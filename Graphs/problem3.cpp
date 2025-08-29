#include <iostream>
#include <vector>
using namespace std;


//https://codeforces.com/gym/317667/problem/D
vector<vector<int>>ady;
vector<bool>visitado;
vector<int>color; 
bool is_possible = true;

void dfs(int n, int c){
	if(visitado[n]){
		if(c != color[n]){
			is_possible = false;
		}
		return;
	}else{
		visitado[n] = true;
		color[n] = c;
	}
		
	
	for(auto nodo : ady[n]){
		dfs(nodo, !c);
	}
}

int main(int argc, char *argv[]) {
	int n,m;
	cin >> n >>m;
	ady.resize(n);
	color = vector<int>(n, 10);
	visitado = vector<bool>(n, false);
	for(int i=0;i<m;i++) { 
		int a,b;
		cin >> a >> b;
		--a;
		--b;
		ady[a].push_back(b);
		ady[b].push_back(a);
	}
	
	for(int i=0;i<n;i++) { 
		if(ady[i].empty()){continue;}
		if(!visitado[i]){
			dfs(i, 1);
		}
	}
	
	vector<int>vertexcover1;
	vector<int>vertexcover2;
	if(is_possible == false){
		cout << "-1";
		return 0;
	}else{
		for(int i=0;i<n;i++) { 
			if(color[i] == 0){
				vertexcover1.push_back(i+1);
			}
			if(color[i]==1){
				vertexcover2.push_back(i+1);
			}
		}
	}
	cout << endl;
	cout << vertexcover1.size() <<endl;
	for(int i=0;i<vertexcover1.size();i++) { 
		cout << vertexcover1[i] << " "; 
	}
	cout << endl;
	cout << vertexcover2.size() <<endl;
	for(int i=0;i<vertexcover2.size();i++) { 
		cout << vertexcover2[i] << " "; 
	}
	
	return 0;
}
