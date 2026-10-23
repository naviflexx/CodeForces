#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
        }
    long long sum = accumulate(nums.begin(), nums.end(), 0LL);
    cout << sum-(n-1) << "
";
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        solve();
    }
}