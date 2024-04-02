#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x, y;
    ll sum = 0, mx = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            sum = 0;
            sum += arr[i][j];
            x = i-1, y = j+1;
            while (x >= 0 && y < m)
            {
                sum += arr[x][y];
                x--;
                y++;
            }
            x = i+1, y = j+1;
            while (x < n && y < m)
            {
                sum += arr[x][y];
                x++;
                y++;
            }
            x = i-1, y = j-1;
            while (x >= 0 && y >= 0)
            {
                sum += arr[x][y];
                x--;
                y--;
            }
            x = i+1, y = j-1;
            while (x < n && y >= 0)
            {
                sum += arr[x][y];
                x++;
                y--;
            }
            mx = max(mx, sum);    
            // cout << sum << endl;        
        }
    }
 
    cout << mx << '\n';
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
 
    return 0;
}