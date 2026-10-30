#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int> nums(n);
	    for(int i=0; i<n; i++) cin >> nums[i];
	    for(int j=0; j<n; j++){
	        for(int i=1; i<n-1; i++){
	            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]) swap(nums[i],nums[i+1]);
	        }
	    }
	    bool sorted = true;
	    for(int i=1; i<n; i++){
	        if(nums[i] < nums[i-1]) sorted = false;
	    }
	    if(sorted) cout <<"YES
";
	    else cout << "NO
";
	}
}