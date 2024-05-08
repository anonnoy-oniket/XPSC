#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int m, n;
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];
    cin >> n;
    vector<int> g(n);
    for(int i = 0; i < n; i++) cin >> g[i];
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    map<int, bool> taken;
    long long int ans = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j  < n; j++)
        {
            if(!taken[j] && abs(b[i] - g[j]) <= 1)
            {
                taken[j] = true;
                ans++;
                break;
            }
        }
    }
    cout << ans << '\n';
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}