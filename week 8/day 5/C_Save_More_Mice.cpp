#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    for(int i = 0; i <k; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int ans = 0, moves = 0, idx = -1;
    for(int i = k-1; i >= 0; i--)
    {
        if(i == idx) break;
        moves += n-v[i];
        auto it = upper_bound(v.begin(), v.end(), moves);
        idx = it - v.begin() - 1;
        ans++;
        if(idx >= i) break;
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