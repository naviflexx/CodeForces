#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int> nums(n);
	    for(int i=0; i<n; i++){
	        cin >> nums[i];
	    }
	    int ct=0;
        for(int i=0; i<n; i++) {
            if(nums[i]!=0){
                ct++;
                while(i<n && nums[i] !=0){
                    i++;
                }
            }
        }
        cout << min(ct, 2) << "
";
	}
}