#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	string n;
	cin >> n;
	sort(n.begin(), n.end());
	int ans = 0;
	do{
		for(int i=1; i<(int)n.size(); i++){
			string a="", b="";
			for(int j=0; j<i; j++) a += n[j];
			for(int j=i; j<(int)n.size(); j++) b+=n[j];
			if(a[0]=='0' || b[0]=='0') continue;
			ans = max(ans, stoi(a)*stoi(b));
		}
	}while(next_permutation(n.begin(), n.end()));
	cout << ans << endl;
}
