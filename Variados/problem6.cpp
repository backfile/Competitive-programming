#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/contest/2136/problem/A

typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve2() {
	float a, b, c, d;
	cin >> a >> b >> c >> d;
	
	float seconda = c-a;
	float secondb = d-b;
	
	bool cond = true;
	
	if(a >= b){
		if(a-2<=b*2){
		
		}else{
			cond = false;
		}
	}else{
		if(b-2<=a*2){
		
		}else{
			cond = false;
		}
	}
	
	if(seconda >= secondb){
		if(seconda-2<=secondb*2){
			
		}else{
			cond = false;
		}
	}else{
		if(secondb-2<=seconda*2){
			
		}else{
			cond = false;
		}
	}
	
	if(cond){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve2();
}


