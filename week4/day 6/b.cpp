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
	    bool last = false;
	    int l = 1, r = n;
	    while(l <= r)
	    {
	        if(last == false)
	        {
	            cout << l << " ";
	            last = true;
	            l++;
	        }
	        else
	        {
	            cout << r << " ";
	            last = false;
	            r--;
	        }
	    }
	    cout << '\n';
	}

}