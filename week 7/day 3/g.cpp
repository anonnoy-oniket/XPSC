#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] += i+1;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    long long int cost = 0;
    for(int i = 0; i < n; i++)
    {
        cost += v[i];
        if(cost <= c) ans++;
        else break;
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