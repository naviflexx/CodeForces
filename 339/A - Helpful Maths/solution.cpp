#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s; cin >> s;
	if(s.size()==1){
	    cout << s;
	    return 0;
	}
	int k = s.size();
	vector<int> nums;
	for(int i=0; i<k; i+=2){
	    int p = s[i]-'0';
	    nums.push_back(p);
	}
	sort(nums.begin() , nums.end());
	for(int i=0; i<nums.size(); i++){
	    cout << nums[i];
	    if(i==nums.size()-1) {
	        break;
	    }
	    cout << '+';
	}
}