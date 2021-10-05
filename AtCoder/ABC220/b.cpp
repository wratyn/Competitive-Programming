#include <bits/stdc++.h>
 
using namespace std;
 
long long toDeci(string n, long long base){
	long long ans = 0;
	for(char a : n){
		ans *= base;
		ans += a - '0';
	}
	return ans;
}
 
int main(){
	long long k;
	string a,b;
	cin >> k >> a >> b;
	long long A = toDeci(a,k);
	long long B = toDeci(b,k);
	cout << A*B << endl;
	return 0;
}
