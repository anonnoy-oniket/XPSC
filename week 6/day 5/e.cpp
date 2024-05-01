#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    long long int ans = 0;
    for(int i = 0; i < (1<<n); i++)
    {
        long long int tot = 0, diff;
        int mn = INT_MAX, mx = INT_MIN;
        for(int j = 0; j < n; j++)
        {
            if(i&(1<<j))
            {
                tot += v[j];
                mn = min(mn, v[j]);
                mx = max(mx, v[j]);
            }
        }
        if(tot >= l && tot <= r && (mx-mn) >= x) ans++;
        
    }
    cout << ans << '\n';

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}