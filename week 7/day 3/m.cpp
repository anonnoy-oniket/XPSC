#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, n, s;
    cin >> a >> b >> n >> s;
    int na = s/n;
    if(na > a)
    {
        if(s-a*n <= b) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    else
    {
        if(s%n <= b) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
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