#include<bits/stdc++.h>
using namespace std;
int main(){

    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    for(int i = 0; i < m; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int k = 0;
    int res  = 0;
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        while (true)
        {
            if(k < m && a[k] < b[i])
            {
                cnt++;
                k++;
            }
            else
            {
                res += cnt;
                cout << res << " ";
                break;
            }
            
        }
        
    }

    return 0;
}