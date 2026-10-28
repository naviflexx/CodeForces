#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int> nums(n);
	    int ct=0;
	    for(int i=0; i<n; i++){
	        cin >> nums[i];
	        if(nums[i]==2) ct++;
	    }
	    if(ct%2 !=0){
	        cout << -1 <<"
"; continue;
	    }
	    int k=0;
	    for(int i=0; i<n; i++){
	        if(nums[i]==2) k++;
	        if(k==ct/2){
	            cout << i+1 << "
"; break;
	        }
	    }
	}
}