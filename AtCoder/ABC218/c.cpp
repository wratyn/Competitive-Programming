#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main(){
	int n; cin >> n;
	vector<string> s(n), t(n);
	for(int i=0; i<n; i++) cin >> s[i];
	for(int i=0; i<n; i++) cin >> t[i];
 
	auto rotate=[&](vector<string> a){
		vector<string> res(n, string(n, '.')); //make vector res with all '.'
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				res[j][n-i-1] = a[i][j];
			}
		}
		return res;
	};
 
	auto normalize=[&](vector<string> a){
		int ii=n, jj=n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(a[i][j]=='#'){
					ii = min(ii, i);
					jj = min(jj, j);
				}
			}
		}
		vector<string> res(n, string(n, '.'));
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(a[i][j]=='#'){
					res[i-ii][j-jj]='#';
				}
			}
		}
		return res;
	};
 
	auto same=[&](vector<string> a, vector<string> b){
		return normalize(a)==normalize(b);
	};
 
	for(int i=0; i<4; i++){
		if(same(s,t)){
			cout << "Yes" << endl;
			return 0;
		}
		t=rotate(t);
	}
	cout << "No" << endl;
	return 0;
} 
