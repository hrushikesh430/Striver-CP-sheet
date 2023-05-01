#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,jon,pla;
    cin >> n >> jon >> pla;
    ll each = n/pla;
    if(each > jon)
    {
        cout << jon << endl;
        return;
    }
    jon = jon-each;
    ll temp = jon;
    pla--;
    jon = temp/pla;
    if(temp%pla)
        jon++;
    cout<< abs(each-jon) << endl;
    

}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}