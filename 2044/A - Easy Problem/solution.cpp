#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    int a,b;
    int ct=0;
    for(int i=1; i<n; i++){
        a = n-i;
        b=i;
        if (a+b==n) ct++;
    }
    cout << ct <<"
";
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
	    solve();
	}
}