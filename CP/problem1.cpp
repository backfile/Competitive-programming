#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//https://codeforces.com/problemset/problem/1195/C

int main(int argc, char *argv[]) {
	long long n;
	cin >> n;
	vector<long long>row1;
	vector<long long>row2;
	for(long long i=0;i<n;i++) { 
		long long altura;
		cin >> altura;
		row1.push_back(altura);
	}
	
	for(long long i=0;i<n;i++) { 
		long long altura;
		cin >> altura;
		row2.push_back(altura);
	}
	vector<vector<long long>>maxx(2);
	
	//Casos bases
	maxx[0].push_back(row1[0]);
	maxx[1].push_back(row2[0]);
	
	maxx[0].push_back(maxx[1][0] + row1[1]);
	maxx[1].push_back(maxx[0][0] + row2[1]);
	
	for(long long i=2;i<n;i++) { 
		maxx[0].push_back(max(maxx[1][i-1], maxx[1][i-2]) + row1[i]);
		maxx[1].push_back(max(maxx[0][i-1], maxx[0][i-2]) + row2[i]);
	}

	cout << max(maxx[1][n-1], maxx[0][n-1]);
	
	return 0;
}

