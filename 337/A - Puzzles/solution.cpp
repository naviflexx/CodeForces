#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	 int n; cin >> n; 
	 int m; cin >> m;
	 
	 vector<int> v(m);
	 for(int i=0; i<m; i++){
	     cin >> v[i];
	 }
	 
	 sort(v.begin() , v.end());
	 int diff=INT_MAX;
	 for(int i=0; i+n-1<m; i++){
	     if((v[i+n-1]-v[i])<diff){
	         diff = v[i+n-1]-v[i];
	     }
	 }
	 cout << diff;
}