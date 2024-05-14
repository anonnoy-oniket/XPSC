#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    bool flag = false;
    int pos = 0;
    for(int i = 1; i < n-1; i++)
    {
        if(v[i] > v[i+1] && v[i] > v[i-1])
        {
            flag = true;
            pos = i;
            break;
        }
    }
    if(flag) cout << "YES" << '\n' << pos << " " << pos+1 << " " << pos+2 << '\n';
    else cout << "NO" << '\n';
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;;
    while (t--)
    {
        solve();
    }

    return 0;
}