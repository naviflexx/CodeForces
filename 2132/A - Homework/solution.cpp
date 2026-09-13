#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string a;
	    cin >> a;
	    
	    int m;
	    cin >> m;
	    string b;
	    cin >> b;
	    
	    string c;
	    cin >> c;
	    
	    for(int i=0; i<m; i++)
	    {
	        if(c[i]=='D')
	        {
	            a.push_back(b[i]);
	        }
	        else
	        {
	            a = b[i] + a;
	        }
	    }
	    cout << a << "
";
	    
	}
}