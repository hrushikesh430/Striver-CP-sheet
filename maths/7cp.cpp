#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b;
    cin >> a >> b;
    if(a%2 == 0)
    {
        cout << (a/2)*b << endl;
    }
    else if(a%2 )
    {
        cout << ((a/2)+1)*b - b/2 << endl;
    }
   
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}