#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mn = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mn = min(mn, v[i]);
    }
    long long int ans = 0;
    // if(n&1)
    // {
    //     bool flag = false;
    //     for(int i = 0; i < n; i++)
    //     {
    //         if(v[i] == mn && flag == false) 
    //         {
    //             flag = true;
    //             continue;
    //         }
    //         ans = ans|v[i];
    //     }
    //     ans += mn;
    // }
    // else
    // {
        
    //     for(int i = 0; i < n; i++) ans = ans|v[i];
    // }
    for(int i = 0; i < n; i++) ans = ans|v[i];
    cout << ans << '\n';
    
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