#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int window = 0, cnt = 0, ans = 0, l = 0, r = k-1;
    for(int i = l; i <= r; i++)
    {
        if(v[i] % 2 == 1) cnt++;
    }
    // cout << cnt << endl;
    while (r < n)
    {
        if(cnt > 0) ans++;
        if(v[l] & 1 == 1) cnt--;
        l++;
        // if(v[l]&1==1) cnt++;
        r++;
        if(r != n && v[r]&1==1) cnt++;
        // cout << cnt << endl;
    }
    cout << ans << endl;

    
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        // cout << "__________________" << endl;
    }

    return 0;
}