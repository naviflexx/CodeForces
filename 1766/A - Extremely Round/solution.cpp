#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
        if(n<10){
            cout << n<<"
"; continue;
        }
        int digi=0, num=n;
        while(num>0){
            digi++; num/=10;
        }
        int ans=0;
        ans += 9*(digi-1);
        int k= 1*pow(10, digi-1);
        ans+= n/k;
        cout << ans<<"
";
	}
}