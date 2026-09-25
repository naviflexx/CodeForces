#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin>>t;
	int sum=0;
	while(t--){
	    int a; cin >> a;
	    int b; cin >> b;
	    int c; cin >> c;
	    int total = a+b+c;
	    if(total>=2){
	        sum++;
	    }
	}
	cout << sum;
}