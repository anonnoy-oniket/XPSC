#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    ll ans = 0; int cnt = 0, l = 0, r = 0;
    while (r < n)
    {
        if(v[l] <= q)
        {
            cnt++;
            r++;
            while (true)
            {
                if(r == n || v[r] > q)
                {
                    l = r;
                    break;
                }
                else
                {
                    cnt++;
                    r++;
                }                
            }     
            if(cnt >= k) ans += (1LL*(cnt-k+1)*(cnt-k+2))/2; 
            cnt = 0;
        }
        else
        {
            l++;
            r++;
        }
    }
    cout << ans << endl;
    
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