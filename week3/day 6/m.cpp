#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    if (a == b)
        cout << "=" << '\n';
    else
    {
        map<char, int> val;
        val['S'] = 0;
        val['M'] = 1;
        val['L'] = 2;
        if (val[a.back()] > val[b.back()])
            cout << ">" << endl;
        else if (val[a.back()] < val[b.back()])
            cout << "<" << endl;
        else
        {
            int xa = 0, xb = 0;
            for (char c : a)
                if (c == 'X')
                    xa++;
            for (char c : b)
                if (c == 'X')
                    xb++;
            if (a.back() == 'L')
            {
                if (xa > xb)
                    cout << ">" << endl;
                else
                    cout << "<" << endl;
            }
            else
            {
                if (xa > xb)
                    cout << "<" << endl;
                else
                    cout << ">" << endl;
            }
        }
    }
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