#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n; cin >> n;
	int min=INT_MAX;
	for(int i=0; i<n; i++){
        int x; cin >> x;
        if(min > abs(x)) min = abs(x);
    }
    cout << min << "
";
}