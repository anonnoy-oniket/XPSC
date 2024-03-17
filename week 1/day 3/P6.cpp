//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k) 
{
    vector<long long int> v;
    queue<long long int> q;
    long long int cnt = 0;
    for(int i = 0; i < k; i++)
    {
        if(a[i] < 0)
        {
            if(cnt == 0)  v.push_back(a[i]);
            cnt++;
            q.push(a[i]);
        }
    }
    if(cnt == 0) v.push_back(0);
    int l = 0, r = k - 1;
    while(true)
    {
        if(r == n-1) break;
        if(a[l] < 0)
        {
            cnt--;
            q.pop();
        }
        l++;
        r++;
        if(a[r] < 0)
        {
            cnt++;
            q.push(a[r]);
        }
        if(cnt == 0) v.push_back(0);
        else v.push_back(q.front());
    }
    return v;
}