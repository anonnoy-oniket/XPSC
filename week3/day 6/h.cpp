#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    priority_queue<int> pq;
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        pq.push(v[i]);
 
        if(v[i] == 0)
        {
            if(!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
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