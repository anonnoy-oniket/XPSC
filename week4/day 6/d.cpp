#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int xr = 0;
    for(int i  = 0; i < n; i++)
    {
        cin >> v[i];
        xr = xr ^ v[i];
    }
    if(n&1) cout << xr << '\n';
    else
    {
        if(xr == 0) cout << xr << '\n';
        else cout << -1 << '\n';
    }

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