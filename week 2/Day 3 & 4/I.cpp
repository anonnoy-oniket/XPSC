#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = 0, num;
        vector<int> v;
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> num;
            if(mp[num] == 0)
            {
                v.push_back(num);
                mp[num]++;
                k++;
            }
        }
        if((n-k) % 2 == 0) cout << k << endl;
        else cout << k - 1 << endl;
 
    }
    
 
    return 0;
}