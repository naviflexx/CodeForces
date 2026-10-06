#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s; cin >> s;
	string k , p;
	for(int i=0; i<s.size();){
	    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
	        i+=3;
	        if(i!=2 || i!=s.size()-1) k+= " ";
	    }
	    else{
	        k+=s[i];
	        i++;
	    }
	}
    for(int i=0; i<k.size(); i++){
        if(k[i]==' ' && k[i+1]==' ') k.erase(i ,1);
    }
    cout << k;
}