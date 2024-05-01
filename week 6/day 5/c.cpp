#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    int i = s.size() - 1;
    while (i >= 0)
    {
        string a = "";

        if (s[i] == '0')
        {
            a += s[i - 2];
            a += s[i - 1];
            i -= 3;
        }
        else
        {
            a += s[i];
            i--;
        }
        int x = stoi(a);
        char c = char(x+96);
        ans += c;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main()
{

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