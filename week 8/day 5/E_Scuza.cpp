#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n), pref(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    pref[0] = v[0];
    for(int i = 1; i < n; i++) pref[i] = pref[i-1] + v[i];
    int k;
    while (q--)
    {
        cin >> k;
        int idx = -1;
        for(int i = 0; i < n; i++)
        {
            idx = i;
            if(v[i] > k)
            {
                idx--;
                break;
            }
        }
        if(idx == -1) cout << 0 << " ";
        else cout << pref[idx] << " ";
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
        cout << '\n';
    }

    return 0;
}