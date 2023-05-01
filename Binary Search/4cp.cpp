#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cal(vector<ll> v, ll n)
{
    ll sum = 0;
    for(int i = 0 ; i < v.size()-1 ; i++)
    {
        if(v[i]+n > v[i+1])
            sum +=  v[i+1]-v[i];
        else
            sum += n;
    }
    sum += n;
    return sum;
}


void solve()
{
  
  ll n , k;
cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0 ; i < n; i++)
        cin >> v[i];

    ll start = 1, end = k;
    
    while(start <= end)
    {
        ll mid = start + (end-start)/2;
        ll x = cal(v,mid);
        if(x < k)
            start = mid+1;
        else if(x >= k)
            end = mid-1;
       
    }
    
    cout << start << endl;
  
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}