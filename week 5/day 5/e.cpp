#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int pos = 0;
    for(int i = 0; i < 32; i++)
    {
        if(n&(1<<i)) pos = i;
    }
    cout << (1<<pos) - 1 << endl;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}