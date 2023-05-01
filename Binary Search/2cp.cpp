#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cal(vector<ll> v, vector<ll> h, ll mid)
{
    ll total = 0;

    for(ll i = 0 ; i < v.size() ; i++)
    {
        ll a = 0;
        total += max(a,mid*v[i]-h[i]);
    }
    return total;
}


void solve()
{
  
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n),h(n);
    for(ll i= 0 ; i < n; i++)
        cin >> v[i];

    for(ll i= 0 ; i < n; i++)
        cin >> h[i];

    ll low = 0, high = 4000;

    while(low <= high)
    {
        ll mid = low + (high-low)/2;

        ll total = cal(v,h,mid);

        if(k >= total)
            low = mid+1;
        else    
            high = mid-1;

    } 
    cout << high << endl;

    
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}