#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, len = 0;
    cin >> x;
    string bin_x = "";
    for(int i = 0; i < 32; i++)
    {
        if(x/(1<<i) == 0) break;
        if(x&(1<<i)) bin_x += '1';
        else bin_x += '0';
        len++;
    }
    int a = 0, b = 0;
    b = 1 << (len-1);
    for(int i = 0; i < len-1; i++)
    {
        if(bin_x[i] == '1') a += 1 << i;
    }
    cout << a << " " << b << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--)
	{
	    solve();
	}
}
