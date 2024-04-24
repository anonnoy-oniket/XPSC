#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string v;
    cin >> v;
    int l = 0, r = n-1, cnt = 0;
    while (l < r)
    {
        if(v[l] != v[r]) cnt++;
        l++;
        r--;
    }
    string s = "";
    for(int i = 0; i <= n; i++)
    {
        if(i < cnt) s += '0';
        else if(i == cnt)
        {
            s += '1';
        }
        else
        {
            if(i > n-cnt)
            {
                s += '0';
                continue;
            }
            if(n&1) s += '1';
            else
            {
                if((i-cnt)%2 == 0) s += '1';
                else s += '0';
            }
        }
    }
    cout << s << '\n';

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