#include <bits/stdc++.h>
using namespace std;
 
#define ios ios::sync_with_stdio(0); cin.tie(0);
 
void solve(){
    int n, k, x; cin >> n >> k >> x;
    if(k==1){
        cout << "NO
"; return;
    }
    if(k==2 && x==1 && n%2!=0){
        cout << "NO
"; return;
    }
    if(n%2==0){
        if(x!=2){
            cout << "YES
" << n/2 <<"
";
            for(int i=0; i<n/2; i++) cout << 2 <<" ";
            cout <<"
";
        }
        else{
            cout << "YES
" << n <<"
";
            for(int i=0; i<n; i++) cout << 1 <<" ";
            cout <<"
";
        }
    } 
    else {
        if(x!=1){
            cout << "YES
" << n <<"
";
            for(int i=0; i<n; i++) cout << 1 <<" ";
            cout <<"
";
        } 
        else {
            cout << "YES
" << 1+(n-3)/2 <<"
"<< 3 <<" ";
            n-=3;
            while(n>0) {
                cout << 2 <<" ";
                n-=2;
            }
            cout <<"
";
        }
    }
    
}
 
int main() {
	ios
	int t; cin >> t;
	while(t--){
	   solve();
	}
}