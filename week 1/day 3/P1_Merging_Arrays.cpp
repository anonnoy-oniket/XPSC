#include <bits/stdc++.h>
using namespace std;
int main()
{

    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int l = 0, r = 0;
    vector<int> v;
    int t = m + n;
    while (t--)
    {
        if (l < m && r < n)
        {
            if (a[l] < b[r])
            {
                v.push_back(a[l]);
                l++;
            }
            else
            {
                v.push_back(b[r]);
                r++;
            }
        }
        else if (l < m)
        {
            v.push_back(a[l]);
            l++;
        }
        else
        {
            v.push_back(b[r]);
            r++;
        }
    }
    for (int x : v)
        cout << x << " ";

    return 0;
}