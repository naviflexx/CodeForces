#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    long long x , y; cin >> x >> y;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin >> nums[i];
    sort(nums.begin() , nums.end());
    long long sum = accumulate(nums.begin(), nums.end(), 0LL);
    int lb=0 , rb=n-1; long long ct=0;
    while(lb<rb){
        if((long long)nums[lb] + nums[rb] <= sum - x){
            ct += rb-lb;
            lb++;
        }
        else rb--;
    }
    lb=0; rb=n-1; long long ct2=0;
    while(lb<rb){
        if((long long) nums[lb] + nums[rb] <= sum-y-1){
            ct2 += rb-lb;
            lb++;
        }
        else rb--;
    }
    cout << ct-ct2 << "
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