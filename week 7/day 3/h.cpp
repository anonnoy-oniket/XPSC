#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int neg = 0, min_abs = INT_MAX;
    long long int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] < 0) neg++;
        min_abs = min(abs(v[i]), min_abs);
        
        sum += abs(v[i]);
    }
    if(neg&1)
    {
        sum -= 2*min_abs;
    }
    cout << sum << '\n';
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