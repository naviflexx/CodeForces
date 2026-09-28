#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n; cin >> n;
	int k; cin >> k;
	
	vector<int> v(n);
	for(int i=0; i<n; i++){
	    cin >> v[i];
	}
	int count=0;
	sort(v.begin(), v.end(), greater<int>());
	for(int i=0; i<n; i++){
	    if(v[i]>0 && v[i]>=v[k-1]) count++;
	}
	cout << count;
}