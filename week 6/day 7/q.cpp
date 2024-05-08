#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool flag = false;
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] != s[0] && i != s.size()/2)
        {
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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