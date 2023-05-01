#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cal(ll n)
{
    return (n*(n+1))/2;
}


void solve()
{
  
  ll n , k;
  cin >> n >> k;
  n--;
  ll s = cal(k-1);
  if(s < n)
  {
    cout << -1 << endl;
    return;
  }

  ll start = 1, end = k-1;
  while(start <= end)
  {
    ll mid = start + (end-start)/2;

    if(s-cal(mid) >= n)
        start = mid+1;
    else
      end = mid-1;
  }

  cout << k-1-end << endl;
  
}
int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}