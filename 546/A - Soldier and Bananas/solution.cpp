#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int k , n , w;
	cin >> k >> n >> w;
	int t=0;
	for(int i=1; i<=w; i++){
	    t+= i*k;
	}
	if(t<n) cout << 0;
	else cout << t-n;
}