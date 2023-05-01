#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin >> n >> k;
    if(n > k)
    {
        ll temp = n;
        temp = n/k;
        if(n%k)
            temp++;
        k = temp*k;
    }

    ll ans = k/n;
    if(k%n)
        ans ++;
    cout << ans << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}