#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n , x; cin >> n >> x;
	int sum = 0, ans=0;
	for(int i=0; i<n; i++){
	    int k; cin >> k;
	    sum += k;
	}
	if(sum==0){
	    cout << 0; return 0;
	}
	if(abs(sum) < x){
	    cout << 1 ; return 0;
	}
	else {
	    if(abs(sum)%x==0) {
	        cout << abs(sum)/x;
	    }
	    else {
	        cout << abs(sum)/x + 1;
	    }
	}
}