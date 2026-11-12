#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin >> t;
	while(t--){
	    int n , ct=0 , sum = 0 , ans=0; cin >>n;
	    vector<int> nums(n);
	    for(int i=0; i<n; i++){
	        cin >> nums[i];
	        sum += nums[i];
	        if(nums[i] == -1) ct++;
	    }
	    if(sum<0) {
	        while(sum<0){
	            ans+= 1;  ct-= 1;
	            sum+=2;
	        }
	    }
	    if(ct%2==1) {
	        ans++;
	    }
	    cout << ans <<"
";
	}
}