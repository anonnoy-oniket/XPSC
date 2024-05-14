#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    ll prev, curr;
    curr = v[n-1];
    ll ans = curr;
    for(int i = n-2; i >= 0; i--)
    {
        prev = curr;
        curr = prev + v[i];
        if(curr > ans) ans = curr;
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