#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll val = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'L') v[i] = (n-1-i)-i;
        else if(s[i] == 'R') v[i] = i - (n-1-i);
        if(i > 0 && s[i] == 'L')
        {
            for(int j = i-1; j >= 0; j--) val++;
        }
        else if(i < n-1 && s[i] == 'R')
        {
            for(int j = i+1; j < n; j++) val++;
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 1; i <= n; i++)
    {
        if(v[i-1] > 0) val += v[i-1];
        cout << val << " ";        
    }
    cout << endl;
    
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