#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, q;
    ll sum = 0;
    cin >> n >> q;
    vector<int> v(n), pref(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i == 0) pref[i] = v[i];
        else
        {
            pref[i] = pref[i-1] + v[i];
        }
        
        sum += v[i];
    }
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        ll total = sum;
        if(l == 1) total = total - pref[r-1] + (r-l+1)*k;
        else total = total - (pref[r-1] - pref[l-2]) + (r-l+1)*k;
        if(total % 2 ==0 ) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}