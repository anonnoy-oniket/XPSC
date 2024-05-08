#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int len = (n*(n-1)) >> 1;
    vector<int> v(len);
    for(int i = 0; i < len; i++) cin >> v[i];
    vector<int> res;
    sort(v.begin(), v.end());
    int pos = -1;
    for(int len = n-1; len >= 1; len--)
    {
        pos = pos+len;
        res.push_back(v[pos]);
    }
    for(int x : res) cout << x << " ";
    cout << res.back() << '\n';
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