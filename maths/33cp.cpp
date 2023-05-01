#include<bits/stdc++.h>
using namespace std;

void solve()
{
    
          float h,l;
          float two = 2;
        float pre = 0.0000000000001;
        cin >> h >> l;        
        float first = (l*l) - (h*h);
        float second = two*h;
       
        float ans = (float)(first/second);
       printf("%.13f\n",ans);
        
        
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}