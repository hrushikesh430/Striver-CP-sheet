#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin >> a >> b;
    if(a < b)
    {
        if(2*a >= b)
        {
            cout << 4*a*a << endl;
            return;
        }
        else
        {
            cout << b*b << endl;
            return;
        }
    }
    else
    {
         if(2*b >= a)
        {
            cout << 4*b*b << endl;
            return;
        }
        else
        {
            cout << a*a << endl;
            return;
        }
    }
    
  
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}