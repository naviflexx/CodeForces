#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m=INT_MAX;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            m=min(m, x);
        }
        cout << (m<=n-1 ? n:0) << "
";
    }
}