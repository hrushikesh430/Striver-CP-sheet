#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b;
    cin >> a>> b;
    if(a%b == 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        long long temp = a/b;
        temp++;
        temp = b*temp;
        temp = temp-a;
        cout << temp << endl;
        return;
    }
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}