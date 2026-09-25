#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s1; cin >> s1;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	string s2; cin >> s2;
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	for(int i=0; i<s1.size(); i++){
	    int k = s1[i]-65;
	    int p = s2[i]-65;
	    if(k>p){
	        cout << 1;
	        return 0;
	    }
	    else if(k<p){
	        cout << -1;
	        return 0;
	    }
	}
	cout << 0;
}