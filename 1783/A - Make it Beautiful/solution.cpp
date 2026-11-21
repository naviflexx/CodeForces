#include <bits/stdc++.h>
using namespace std;
 
#define ios ios::sync_with_stdio(0); cin.tie(0);
 
void solve(){
    int n; cin >> n;
    vector<int> nums(n);
    unordered_set<int> st;
    for(int i=0; i<n; i++) {
        cin >> nums[i];
        st.insert(nums[i]);
    }
    if(st.size()==1) {
        cout << "NO
"; return;
    }
    vector<int> rev = nums;
    vector<int> ans(n);
    sort(nums.begin(), nums.end());
    sort(rev.begin(), rev.end(), greater<int>());
    int i=0, j=0;
    while(i<n){
        ans[i]=rev[j];
        ans[i+1]=nums[j];
        i+=2; j++;
    }
    cout << "YES
";
    for(int i=0; i<n; i++){
        cout << ans[i]<<" ";
    }
    cout <<"
";
    
}
 
int main() {
	ios
	int t; cin >> t;
	while(t--){
	   solve();
	}
}