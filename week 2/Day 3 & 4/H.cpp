#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int p = n;
        vector<string> v;
        while (n--)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int diff, mn = INT_MAX;
        for(int i = 0; i < p-1; i++) 
        {
            for(int j = i+1; j < p; j++)
            {
                diff = 0;
                for(int k = 0; k < m; k++)
                {
                    diff += abs(v[i][k] - v[j][k]);
                    // cout << v[i] << " " << v[j] << endl;
                }
                // cout << diff << endl;
                mn = min(diff, mn);
            }
        }        
        cout << mn << endl;
    }
    
 
    return 0;
}