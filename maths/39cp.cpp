#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string n;
    cin >> n;
    string temp = n;
    reverse(n.begin(),n.end());
    temp += n;
    cout << temp << endl;
}

int main()
{
//     int t;
//     cin >> t;
//     while(t--)
        solve();
}