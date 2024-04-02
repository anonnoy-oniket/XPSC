#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int arr[n][n - 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i][0] != arr[i + 1][0] && arr[i][0] != arr[i + 2][0])
            {
                cout << arr[i + 1][0] << " ";
                for (int j = 0; j < n - 1; j++)
                    cout << arr[i][j] << " ";
                cout << endl;
                break;
            }
        }
        else if (i == n - 1)
        {
            if (arr[i][0] != arr[i - 1][0] && arr[i][0] != arr[i - 2][0])
            {
                cout << arr[i-1][0] << " ";
                for (int j = 0; j < n - 1; j++)
                    cout << arr[i][j] << " ";
                cout << endl;
                break;
            }
        }
        else
        {
            if (arr[i][0] != arr[i - 1][0] && arr[i][0] != arr[i + 1][0])
            {
                cout << arr[i-1][0] << " ";
                for (int j = 0; j < n - 1; j++)
                    cout << arr[i][j] << " ";
                cout << endl;
                break;
            }
        }
    }
}
 
int main()
{
 
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