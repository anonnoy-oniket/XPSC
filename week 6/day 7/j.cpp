#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    // sort(v.begin(), v.end());
    ll ans = b-1;
    for(int x: v)
    {
        ans += min(1+x, a) - 1;    
    }
    cout << ans+1 << endl;
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