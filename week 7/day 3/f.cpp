#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        for(int j = 0; j < 31; j++)
        {
            if(v[i]&(1<<j)) mp[j]++;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        bool flag = true;
        for(int j = 0; j < 31; j++)
        {
            if(mp[j]%i != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag) cout << i << " ";
    }
    cout << '\n';
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