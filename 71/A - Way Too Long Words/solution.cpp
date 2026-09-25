#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin>>t;
	while(t--){
	    string s; cin >> s;
	    int size=s.size();
	    if(size>10) {
	        cout << s[0]<<size-2<<s[size-1]<<"
";
	    }
	    else {
	        cout << s<<"
";
	    }
	}
}