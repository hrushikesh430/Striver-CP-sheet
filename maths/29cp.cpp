#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long w,h;
    cin >> w >> h;

   
    long long  ans = LONG_LONG_MIN;
    for(long long i = 0 ; i < 4 ; i++)
    {
        long long cnt ;
        cin >> cnt;
        long long first,last;
        for(long long j = 0 ; j < cnt ; j++)
        {
            int x;
            cin >> x;
            if(j==0)
                first = x;
            if(j == cnt-1)
                last = x;

        }
        if(i <= 1)
            ans = max(ans,(last-first)*h);
        else
            ans = max(ans,(last-first)*w);
        
    }
    
    cout << abs(ans) << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}