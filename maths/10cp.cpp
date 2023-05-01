#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n == 1)
        cout << 1 << endl;
    else if(n%2)
    cout << n/2 + 1 << endl;
    else
    cout << n/2 << endl;
    
  
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}