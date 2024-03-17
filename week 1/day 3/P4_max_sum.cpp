//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
        long long int sum = 0;
        for(int i = 0; i < k; i++) sum += arr[i];
        int l = 0, r = k - 1;
        long long int mx = sum;
        while(true)
        {
            sum -= arr[l];
            l++;
            r++;
            if(r == n) break;
            sum += arr[r];
            mx = max(mx, sum);
        }
        return mx;
        
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends