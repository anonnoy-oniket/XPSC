//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    map<char, int> mp, str;
	    for(char c : pat) mp[c]++;
	    for(int i = 0; i < pat.size(); i++) str[txt[i]]++;
	    int cnt = 0, l = 0, r = pat.size() - 1;
	    while(true)
	    {
	        bool flag = true;
	        for(int i = l; i <= r; i++)
	        {
	            if(str[txt[i]] != mp[txt[i]])
	            {
	                flag = false;
	                break;
	            }
	        }
	        if(flag) cnt++;
	        str[txt[l]]--;
	        l++;
	        r++;
	        if(r == txt.size()) break;
	        str[txt[r]]++;
	    }
	    return cnt;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends