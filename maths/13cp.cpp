#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,n;
    cin >> x >> y >> n;
    if(n%x == y)
        cout << n << endl;
    else if(n%x > y)
        cout << (n-(n%x))+y << endl;
    else
        cout << (n-(n%x))-x+y << endl;
    
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}