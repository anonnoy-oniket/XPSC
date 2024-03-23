#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n != 5) cout << "NO" << endl;
        else
        {
            map<char, int> mp;
            for(int i = 0; i < n; i++)
            {
                mp[s[i]]++;
            }
            string x = "Timur";
            bool flag = true;
            for(char c : x)
            {
                if(mp[c] != 1)
                {
                    flag = false;
                    break;
                }
            }
            
            
            
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        
    }
    
 
    return 0;
}
