#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int pos = 0;
        while (n--)
        {
            int m;
            cin >> m;
            string s;
            cin >> s;
            for(int i = 0; i < m; i++)
            {
                if(s[i] == 'D')
                {
                    if(a[pos] == 9) a[pos] = 0;
                    else a[pos]++;
                    
                }
                else
                {
                    if(a[pos] == 0) a[pos] = 9;
                    else a[pos]--;
                }  
                // cout << a[pos] << endl;              
            }
            pos++;
        }
        for(int i = 0; i < k; i++) cout << a[i] << " ";
        cout << endl;
    }
 
    return 0;
}