#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int x; cin >> x;
	    if(x==1){
	        cout << 1 <<"
";
	        continue;
	    }
	    int mn=INT_MAX;
	    int charge=300;
	    for(int i=1; i<300; i++){
	        int sum=x, at=0;
	        for(int j=charge; j>0 && sum>0; j--){
	            at++; sum-=j;
	        }
	        int ans= charge-1+at;
	        if(sum>0) ans+=sum;
	        mn = min(mn, ans); 
	        charge--;
	    }
	    cout << mn<<"
";
	}   
}