#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >>t;
	while(t--){
	    int n , k; cin >> n >> k;
        string s; cin >> s;
        unordered_map<char,int> freq;
        for(char ax : s) freq[ax]++;
        int ct=0;
        for(auto &p : freq){
            if(p.second%2 !=0) ct++;
        }
        if(ct>k+1) {
            cout << "NO
"; continue;
        }
        else cout <<"YES
";
	}
}