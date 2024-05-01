#include<bits/stdc++.h>
using namespace std;

class cmp
{
    public:
        bool operator()(pair<char, int> a, pair<char, int> b)
        {
            return a.first > b.first;
        }
};

void solve()
{
    string s;
    cin >> s;
    cout << abs(s.front()-s.back()) << " ";
    int m = 0;
    priority_queue<pair<char, int>, vector<pair<char, int>>, cmp> pq1;
    priority_queue<pair<char, int>> pq2;
    for(int i = 1; i < s.size()-1; i++)
    {
        if(s.front() <= s.back())
        {
            if(s.front() <= s[i] && s[i] <= s.back())
            {
                pq1.push({s[i], i+1});
                m++;
            }
        }
        else if(s.front() >= s.back())
        {
            if(s.front() >= s[i] && s[i] >= s.back())
            {
                pq2.push({s[i], i+1});
                m++;
            }
        }
    }
    cout << m+2 << '\n' << 1 << " " ;
    // for(int x : v) cout << x << " ";
    if(s.front() <= s.back())
    {
        while (!pq1.empty())
        {
            cout << pq1.top().second << " ";
            pq1.pop();
        }   
    }
    else
    {
        while (!pq2.empty())
        {
            cout << pq2.top().second <<  " ";
            pq2.pop();
        }
        
    }
    
    cout << s.size() << '\n';

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