#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin >> n >> x;
    if(n >= 1 and n <= 2 )
    {
        cout << 1 << endl;
        return;
    }
    
    for(int i = 1; i <= 1000 ; i++)
    {
        if((n >= (((i-1)*x) +3)) and (n <= ((i*x)+2)))
        {
            cout << i+1 << endl;
            return;
        }
    }

    cout << -1 << endl;
  
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}