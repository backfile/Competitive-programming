#include <iostream>
#include <vector>
using namespace std;

//https://codeforces.com/contest/2137/problem/A

typedef long long ll;
typedef pair<int, int> ii;

int main(int argc, char *argv[]) {
	ll t; // max 400
	cin >> t;
	vector<ll>a;
	for(int i=0;i<t;i++) { 
		ll k, x; // k veces que se aplcia el procedimiento, x valor final,
		cin >> k >> x;
		
		// algo cout
		for(int i=0;i<k;i++) { 
			if(x * 2){
				x = x*2;
			}
		}
		a.push_back(x);
	}
	
	for(auto x : a){
		cout << x << endl;
	}
	
	return 0;
}

