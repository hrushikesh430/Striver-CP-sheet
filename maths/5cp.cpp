#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int odd = 0,even  = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        if((arr[i]%2))
            odd++;
        else
            even++;
    }

    if((odd%2) || (odd%2 == 0 and even > 0 and odd != 0))
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
  
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}