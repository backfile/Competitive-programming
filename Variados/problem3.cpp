#include <iostream>
#include <vector>
using namespace std;

//https://codeforces.com/contest/2137/problem/B

typedef long long ll;

int main(int argc, char *argv[]) {
	ll t;
	cin >> t;
	vector<vector<ll>>v;
	for(int i=0;i<t;i++) { 
		ll n;
		cin >> n;
		
		vector<ll>ni;
		vector<ll>rta;
		for(int i=0;i<n;i++) { 
			ll a;
			cin >> a;
			ni.push_back(a);
			rta.push_back((n + 1)  - a);
		}
		v.push_back(rta);
	}
	for(auto x : v){
		for(auto y : x){
			cout << y << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}

