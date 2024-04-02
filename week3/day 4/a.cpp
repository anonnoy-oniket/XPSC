#include<bits/stdc++.h>
using namespace std;
 
string meow = "meow";
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, bool> mp;
    string x = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] < 'a') s[i] += 32;
        if(i == 0) x += s[i];
        else if(s[i] != s[i-1]) x += s[i];
    }
    if(x == meow) cout << "YES" << '\n';
    else cout << "NO" << '\n';
 
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