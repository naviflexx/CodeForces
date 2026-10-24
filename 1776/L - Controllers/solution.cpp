#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    int plus=0, minus=0;
    for (int i = 0; i < n; i++) {
        if (s[i]=='+') plus++;
        else minus++;
    }
    int q; cin >> q;
    while(q--){
        int a; cin >> a;
        int b; cin >> b;
        if(a==b){
            if (plus==minus) cout << "YES
";
            else cout << "NO
";
        } 
        else{
            long long top = b*1LL*(minus-plus);
            long long bottom = a-b;
            
            if(top%bottom !=0){
                cout << "NO
";
            } 
            else{
                long long d = top/bottom;
                if (d >= -minus && d <= plus) cout << "YES
";
                else cout << "NO
";
            }
        }
    }
}