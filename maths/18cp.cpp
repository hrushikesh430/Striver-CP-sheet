#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a;
    cin >> a;

    if(a%2)
    {
        cout << a/2 << endl;
    }
    else
        cout << (a/2 )-1 << endl;
   
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}