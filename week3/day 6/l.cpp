#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> cnt, last_pos, first_pos;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
        last_pos[v[i]] = i;
        if(cnt[v[i]] == 1) first_pos[v[i]] = i;
    }
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        if(cnt[a] > 0 && cnt[b] > 0)
        {
            if(first_pos[a] < last_pos[b]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
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