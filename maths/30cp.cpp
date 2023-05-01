#include<bits/stdc++.h>
using namespace std;

void solve()
{
    
        long long cnt ;
        cin >> cnt;
        if(cnt%2)
        {
            cout << 0 << endl;
            return;
        }
        if(cnt-2 > -1)
        cout << (cnt-2)/4 << endl;
        else
        cout << 0 << endl;
        
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}