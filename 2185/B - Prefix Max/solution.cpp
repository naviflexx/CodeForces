#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while(t>0)
    {
        t--;
        int n;
        cin >>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
         int maxVal = *max_element(a, a + n);
        cout << maxVal*n << "
";
    }
 
}