#include <bits/stdc++.h>
using namespace std;
 
#define ios ios::sync_with_stdio(0); cin.tie(0);
 
void solve(){
    long long x; cin >> x;
    if(x%2==0){
        if(x%4 !=0) cout << "No
";
        else cout << "yes
";
    }
    else cout << "yes
";
    
}
 
int main() {
	ios
	int t; cin >> t;
	while(t--){
	   solve();
	}
}