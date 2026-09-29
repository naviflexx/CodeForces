#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int freq[26] = {};
 
    string s;
    getline(cin , s);
 
    for (char c : s) {
        if (c != '{' && c != '}' && c != ',') {
            freq[c - 'a']++;
        }
    }
 
    int count = 0;
 
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            count++;
        }
    }
 
    cout << count;
}