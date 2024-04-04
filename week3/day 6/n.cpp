#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] >= 0) sum += v[i];
        else sum -= v[i];
    }
    int l, cnt = 0;
    for(l = 0; l < n; l++)
    {
        if(v[l] < 0)
        {
            int r = l;
            while (r < n && v[r] <= 0)
            {
                r++;
            }
            cnt++;
            l = r;            
        }
    }
    cout <<sum << " " <<  cnt << endl;
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