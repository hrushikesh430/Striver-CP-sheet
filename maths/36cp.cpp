#include<bits/stdc++.h>
using namespace std;

void solve()
{
    
        long long x,y,s;
        cin >> x >> y>>s;
        x = abs(x);
        y = abs(y);
        if(x+y <=s)
        {
            if((s-x-y)%2==0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
                return;
        }
              cout << "No" << endl;
        
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}