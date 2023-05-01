#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a;
    cin >> a;
    if(a < 15)
    {
         cout << "NO" << endl;
         return;
    }

    if(a%14<=6 and a%14 >=1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    

    
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}