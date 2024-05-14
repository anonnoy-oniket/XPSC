#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    int max_len = 0;
    for(int len = 1; len <= min(a.size(), b.size()); len++)
    {
        for(int i = 0; i <= a.size()-len; i++)
        {
            for(int j = 0; j <= b.size(); j++)
            {
                if(a.substr(i, len) == b.substr(j, len))
                {
                    max_len = max(max_len, len);
                }
            }
        }
    }
    cout << a.size()+b.size()-2*max_len << '\n';
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}