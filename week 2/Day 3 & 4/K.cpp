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
        int cnt = 0;
        stack<char> st;
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] == ')')
            {
                st.push(s[i]);
            }
            else
            {
                if(!st.empty())
                {
                    if(st.top() == ')') st.pop();
                }
                else cnt++;
            }    
        }
        cout << cnt << endl;
    }
    
 
    return 0;
}
