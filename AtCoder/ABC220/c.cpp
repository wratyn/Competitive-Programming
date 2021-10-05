#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main(){
	ll n; cin >> n;
	vector<ll> a(n);
	ll sumB=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		sumB+=a[i];
	}
	ll x; cin >> x;
	ll k=x/sumB;
	ll cnt = 0;
	ll times = k*sumB;
	for(auto i:a){
		times+=i;
		cnt++;
		if(times > x){
			cout << k*n+cnt << endl;
			return 0;
		}
	}
}
