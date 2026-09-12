#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int x;
	    cin >> x;
	    if(x==0)
	    {
	        cout << x << "
";
	    }
	    else{
	    int p=x;
	    int ct=0;
	    while(x>0)
	    {
	        x=x/10;
	        ct++;
	    }
	    int a[ct];
	    for(int i=0; i<ct; i++)
	    {
	        a[i] = p%10;
	        p=p/10;
	    }
	    int minval = a[0];
	    for(int i=0; i<ct; i++)
	    {
	        if(a[i]<minval)
	        {
	            minval=a[i];
	        }
	    }
	    cout << minval << "
";
	    }
	}
 
}