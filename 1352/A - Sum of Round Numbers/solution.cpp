#include <bits/stdc++.h>
using namespace std;
void solve() {
    int x; 
    cin >> x;
    int k = x;
    int ct=0;
    int j=0;
    while(k>0) {
        int r=k%10;
        if(r!=0)
        {
            j++;
        }
        k=k/10;
        ct++;
    }
    cout << j << "
";
    for(int i=0; i<ct; i++) {
        long long p=1;
        for(int k=0; k<i; k++) {
            p=p*10;
        }
        int digi = x%10;
        x=x/10;
        if(digi==0) {
            continue;
        }
        else {
            cout << digi*p << " ";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t>0) {
        solve();
        t--;
        cout << "
";
    }
}