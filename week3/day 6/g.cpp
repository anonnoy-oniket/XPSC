#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> cnt;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
        s.insert(v[i]);
        s.insert(v[i]+1);
    }
    int ans = 0, last = 0;
    for(int x : s)
    {
        int c = cnt[x];
        if(c > last)                             
        {
            ans += c - last;
        }
        last = c;
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