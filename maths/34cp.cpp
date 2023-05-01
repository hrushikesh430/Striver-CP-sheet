#include<bits/stdc++.h>
using namespace std;

void solve()
{
    
        long long x,y;
        cin >> x >> y;
        
        if(x==y || (3*x)/2 == y)
        {
            cout << "YES" << endl;
            return;
        }
        if(x <=3 and y > x)
        {
            cout << "NO" << endl;
            return;

        }
        cout << "YES" << endl;
              
        
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}