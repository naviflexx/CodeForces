#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    bool any = false;
    int sum =0;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        if(a[i]%3==1){
            any = true;
        }
    }
    if(sum%3==0){
        cout << 0 << "
";
    }
    else if(sum%3==2){
        cout << 1 << "
";
    }
    else if(sum%3==1){
        if(any == true){
            cout << 1 << "
";
        }
        else{
            cout << 2 << "
";
        }
    }
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >>t;
	while(t--){
	    solve();
	}
 
}