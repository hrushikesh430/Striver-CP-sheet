#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll x,y, a, b;
    cin >> x >> y >> a >> b;

    if(x == 0 and y == 0)
    {
        cout << 0 << endl;
        return;
    }
    if(x == 0 and y != 0)
    {
        cout << abs(y)*a << endl;
        return;
    }
    if(y == 0 and x != 0)
    {
        cout << abs(x)*a << endl;
        return;
    }
    
    ll total1 = abs(x-y)*a;
    if(abs(x) < abs(y))
        total1 += abs(x)*b;
    else if(abs(x) >= abs(y))
        total1 += abs(y)*b;
    ll total2 = (abs(x)+abs(y))*a;
    if(total1 < total2)
        cout << total1 << endl;
    else
        cout << total2 << endl;
    

}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}