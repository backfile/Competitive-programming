#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)



// https://codeforces.com/contest/2162/problem/C

void solve() {
	int a, b; cin >> a >> b;
	
	int msb_a = 31 - __builtin_clz(a);
	int msb_b = 31 - __builtin_clz(b);
	
	if(msb_b > msb_a)  {
		cout << -1 << endl;
		return;
	}
	
	bitset<32>mask = 0;
	bitset<32>a1 = a;
	for(int i=0;i<=msb_a;i++) { 
		if(a1[i] == 1)continue;
		mask[i] = 1;
	}
	
	bitset<32> A(a);
	bitset<32> B(b);
	
	cout << 2 << endl;
	
	//Mannipular los bitset y despues la representacion de esos numeros binarios en decimal con to_ulong();
	
	cout << mask.to_ulong() << " " << (mask^A^B).to_ulong() << endl;
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}


