#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll x,y, z;
    cin >> x >> y >> z;
    ll total = x+y+z;
    total = total - 3*(total/7);
    x -= (total/7);
    y -= (total/7);
    z -= (total/7);
    if(total == 0 || x== 0 || y == 0 || z == 0)
    {
        cout << "No" << endl;
        return;
    }

    // total -= 3;

    if(total%6==0 and total != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
  
    

}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}