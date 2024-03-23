#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, x;
    cin >> n >> x;
    vector<int> v;
    int val;
    for(int i = 0; i < n; i++)
    {
        cin >> val;
        if(val != x) v.push_back(val);
    }
    for(int child : v) cout << child << " ";
    

    return 0;
}