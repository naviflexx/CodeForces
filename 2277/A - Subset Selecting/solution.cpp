#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> nums(n+2, 0);
        for(int i=0; i<n; i++){
            int x; cin >> x;
            nums[x]++;
        }
        int pre = 0, ans = 0;
        for (int j=0; j<=n; j++) {
            pre +=nums[j];
            if(nums[j]>=1 && pre>=(j+1)*k) ans=j+1;
            else break;
        }
        cout << ans <<"
";
    }
}