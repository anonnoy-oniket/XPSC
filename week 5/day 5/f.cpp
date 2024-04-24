#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        for(int k = 0; k < 32; k++)
        {
            if(v[i]/ (1<<k) == 0)
            {
                mp[k-1]++;
                break;
            }
        }
    }
    long long ans = 0;
    for(int i = 0; i < 32; i++)
    {
        ans += 1LL*mp[i]*(mp[i]-1)/2;
    }
    cout << ans << '\n';
}

int main(){

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