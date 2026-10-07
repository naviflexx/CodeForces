#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin() , v.end() , greater<int>());
    int sum =0, i=0;
    int total =accumulate(v.begin(), v.end(), 0);
    for(i=0; i<n; i++){
        if(sum>total){
            break;
        }
        else{
            sum += v[i];
            total-=v[i];
        }
    }
    cout << i;
    
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
}