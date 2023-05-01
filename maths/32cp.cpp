#include<bits/stdc++.h>
using namespace std;

void solve()
{
    
        long long m,n,a ;
        cin >> m >> n >> a;

        long long first = 0, second = 0;
        first = m/a;
         second = n/a;
         if(m%a > 0)
            first++;
        if(n%a > 0)
            second++;
        cout << first*second << endl; 
        
        
        
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}