#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    string ans = "";
    map<string, bool> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = true;
        ans += '0';
    }
    string x, y;
    int p;
    for(int i = 0; i < n; i++)
    {
        p = v[i].size();
        for(int j = 0; j < v[i].size()-1; j++)
        {
            x = "", y = "";
            int l = 0, r = j+1;
            while (l <= j)
            {
                x += v[i][l];
                l++;
            }
            while (r < p)
            {
                y += v[i][r];
                r++;
            }
            if(mp[x] && mp[y])
            {
                ans[i] = '1';
                break;
            }
            
        }
    }
    // ans[0] = '1';
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