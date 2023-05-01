#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b;
    cin >> a >> b;
    long long cnt =0;
    if(a > b)
    {
        int temp = a-b;
        cnt += temp/10;
        if(temp%10>0)
            cnt++;
    }
    else
    {
        int temp = b-a;
        cnt += temp/10;
        if(temp%10>0)
            cnt++;
    }
    cout << cnt << endl;
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}