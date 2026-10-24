#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int n;
ll k;
ll a[1005];
 
bool canReach(int i,ll x){
    ll cost = 0;
    ll need =x;
 
    for(int j=i;j<n;j++){
        if(a[j]>=need) break;
        if(j==n-1) return false;
        cost+= need-a[j];
        need--;
    
    }
    return cost<=k;
}
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    cin>>n>>k;
    for(int i =0;i<n;i++)cin>>a[i];
 
    ll ans=0;
    for(int i =0;i<n;i++){
        ll lo =a[i],hi=a[i]+k;
        while(lo<hi){
            ll mid = (lo+hi+1)/2;
            if (canReach(i,mid)) lo =mid;
            else hi =mid-1;
        }
        ans =max(ans,lo);
 
    }
    cout<<ans<<"
";
}
}