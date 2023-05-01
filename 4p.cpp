#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,l,c,d,p,nl,np;
    cin >>n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = (k*l)/nl;
    int slices = (d*c);
    int salt = p/np;
    drink = min(drink,slices);
    cout << min(drink,salt)/n << endl;
}

int main()
{
    solve();
    return 0;
}