#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], mxval, mxcnt = INT_MIN, moves = 0;
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            if(mp[arr[i]] > mxcnt)
            {
                mxcnt = mp[arr[i]];
                mxval = arr[i];
            }
        }
 
        // cout << mxcnt << " " << mxval << endl;
 
        if(mxcnt == n) cout << 0 << endl;
        else
        {
            while (mxcnt != n)
            {
                moves++;
                if(mxcnt > (n-mxcnt))
                {
                    moves += n - mxcnt;
                    break;
                }
                else
                {
                    moves += mxcnt;
                    mxcnt = 2*mxcnt;
                }
            }
            cout << moves << endl;
        }
        
    }
    
 
    return 0;
}