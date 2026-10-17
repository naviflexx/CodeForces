#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    string s; cin >> s;
	    if(n==1){
	        cout << s[0] <<"
";
	        continue;
	    }
	    int k=0;
	    for(int i=1; i<n; i++){
	        if(s[i]!=s[0]){
	               k=i; break;
	        }
	        else{
	            continue;
	        }
	    }
	    if(k==0) {
	        cout << s <<"
"; continue;
	    }
	    char ch = *min_element(s.begin()+k, s.end());
	    if(ch<=s[0]){
	        int p = s.rfind(ch);
	        s.erase(p,1);
	        s.insert(s.begin(), ch);
	    }
	    cout << s <<"
";
	}
}