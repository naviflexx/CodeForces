#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n , a , b; cin >> n >> a >> b;
	    if(b==n){
	        cout <<"YES
"; continue;
	    }
	    if(n&1^1){
	        if(a>b){
	            if(a&1^1 && b&1^1){
	                cout << "YES
"; continue;
	            }
	            else{
	                cout << "NO
"; continue;
	            }
	        }
	        else{
	            if(b&1^1){
	                cout << "YES
"; continue;
	            }
	            else{
	                cout << "NO
"; continue;
	            }
	        }
	    }
	    if(n&1){
	        if(a>b){
	            if(a&1 && b&1){
	                cout << "YES
"; continue;
	            }
	            else{
	                cout << "NO
"; continue;
	            }
	        }
	        else{
	            if(b&1){
	                cout << "YES
"; continue;
	            }
	            else{
	                cout << "NO
"; continue;
	            }
	        }
	    }
	}
}