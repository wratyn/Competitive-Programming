#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	string s,t;
	cin >> s >> t;
	if(s==t){
		cout << "Yes" << endl;
		return 0;
	}
	for(int i=0; i<(int)s.size(); i++){
		if(s[i]!=t[i]){
			if(s[i]==t[i+1] && s[i+1]==t[i]){
				cout << "Yes" << endl;
				return 0;
			}else{
				cout << "No" << endl;
				return 0;
			}
		}
	}
}
