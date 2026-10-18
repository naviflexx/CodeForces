#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s; cin >> s;
	int small=0, large=0;
	for(char &x : s){
	    if(islower(x)) small++;
	    else large++;
	}
	if(large>small){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	else{
	    transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
    cout << s;
}