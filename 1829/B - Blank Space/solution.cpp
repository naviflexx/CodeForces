#include <bits/stdc++.h>
using namespace std;
 
#define ios ios::sync_with_stdio(0); cin.tie(0);
 
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >>v[i];
    int ans=0, ct=0;
    for(int i=0; i<n; i++){
        if(v[i]==0) {
            ct++;
            ans=max(ans,ct);
        }
        else ct=0;
    }
    cout << ans<<"
";
}
 
int main() {
	ios
	int t; cin >> t;
	while(t--){
	   solve();
	}
}