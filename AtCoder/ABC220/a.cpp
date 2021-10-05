#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int A, B, C;
	cin >> A >> B >> C;
	int k=1,temp;
	while(true){
		temp=C*k;
		k++;
		if(temp>B) break;
		if(A<=temp && temp<=B){
			cout << temp << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
