#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    string s = to_string(n);
    if(s.size()<=2){
        cout << "No
";  return;
    }
    if(s[0]!='1' || s[1]!='0'){
        cout << "No
";  return;
    }
    if(s.size()==3 && s[2]-'0'<2){
        cout << "No
"; return;
    }
    if(s.size()>3 && s[2]=='0'){
        cout << "No
"; return;
    }
    else{
        cout << "Yes
"; return;
    }
    
    
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
	    solve();
	}
}