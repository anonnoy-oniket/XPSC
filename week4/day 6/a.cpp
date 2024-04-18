#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    int ans = 0;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> v[i];
	        ans = ans ^ v[i];
	    }
	    int mn = ans;
	    for(int child : v)
	    {
	        mn = min(mn, ans ^ child);
	    }
	    cout << mn << '\n';
	}

}