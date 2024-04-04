#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}
 
void solve()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> v(3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back({x, j});
        }
    }
    for (int i = 0; i < 3; i++)
        sort(v[i].begin(), v[i].end(), cmp);
    ll ans = 0;
    map<int, bool> day;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                if(v[0][i].second != v[1][j].second and v[0][i].second != v[2][k].second and v[1][j].second != v[2][k].second)
                {
                    ll sum = v[0][i].first + v[1][j].first + v[2][k].first;
                    ans = max(ans, sum);
                }
            }
        }
    }
    cout << ans << endl;
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