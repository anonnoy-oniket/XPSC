#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int odd = 0, even = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]&1) odd++;
        else even++;
    }
    bool flag = false;
    if(even >= x-1)
    {
        if(odd >= 1) flag = true;
    }
    else
    {
        if((x-even)&1)
        {
            if(odd >= x-even) flag = true;
        }
        else
        {
            if(even > 0 && odd >= x-even+1) flag = true;
        }        
    }    

    if(flag) cout << "Yes" << '\n';
    else cout << "No\n";
    
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