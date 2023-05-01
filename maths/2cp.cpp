#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin >> a >> b ;
    
    if(2*a > b)
    {
        cout << -1  << " " << -1 << endl;
    }
    else
        cout << a << " " << 2*a << endl;
  
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}