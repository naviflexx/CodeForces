#include <bits/stdc++.h>
using namespace std;
 
#define ios ios::sync_with_stdio(0); cin.tie(0);
 
void solve(){
    int a,b,c; cin >> a >> b >> c;
    if(c%2==0){
        a--;
        if(a>=b) cout << "First
";
        else cout << "Second
";
    } else {
        b--;
        if(a>b) cout << "First
";
        else cout << "Second
";
    }
}
 
int main() {
	ios
	int t; cin >> t;
	while(t--){
	   solve();
	}
}