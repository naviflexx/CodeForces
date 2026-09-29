#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s1; cin >> s1;
    string s2; cin >> s2;
    string s3; cin >> s3;
 
    if((s1.size()+s2.size()) != s3.size()){
        cout << "NO"; return 0;
    }
    for(int i=0; i<s1.size(); i++){
        size_t pos = s3.find(s1[i]);
        if (pos != string::npos){
            s3.erase(pos , 1);
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    for(int i=0; i<s2.size(); i++){
        size_t pos = s3.find(s2[i]);
        if (pos != string::npos){
            s3.erase(pos , 1);
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "
YES";
}