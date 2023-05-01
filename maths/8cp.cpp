#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c,n;
    cin >> a >> b >> c >> n;
    if(a == b and b == c and n%3 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else if(a == b and b == c and n%3 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    long long maxi = max(a,b);
    maxi = max(maxi,c);
    long long cnt = (maxi-a)+(maxi-b)+(maxi-c);
    if(n-cnt < 0)
    {
        cout << "NO" << endl;
        return;
    }
    if((n-cnt)%3 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
    }
   
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}