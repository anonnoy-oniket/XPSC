#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    map<int, int> mpa;
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
        mpa[a[i]]++;
    } 
    long long int cnt = 0;
    for(int j = 0; j < n; j++)
    {
        cin >> b[j];
        cnt += mpa[b[j]];
    } 
    cout << cnt;
    
 
 
    return 0;
}