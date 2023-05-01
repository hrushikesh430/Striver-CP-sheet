#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve()
{
  
    string s;
    cin >> s;
    ll n1,n2,n3,p1,p2,p3;
    cin >> n1 >> n2 >> n3 >> p1 >> p2 >> p3;
    ll r;
    cin >> r;

    ll a=0, b=0, c=0;
    for(auto x : s)
    {
        if(x== 'B')
            a++;
        if(x=='S')
            b++;
        if(x=='C')
            c++;
    }

    ll low = 0, high = r+200;
    while(low <= high)
    {
        ll mid = low + (high-low)/2;
        ll z= 0;
        ll cnt1 = max(z,mid*a-n1);
        ll cnt2 = max(z,mid*b-n2);
        ll cnt3 = max(z,mid*c-n3);
        ll total = cnt1*p1 + cnt2*p2 + cnt3*p3;

        if(total <= r)
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