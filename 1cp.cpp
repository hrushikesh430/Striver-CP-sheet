#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x = 0;
    for(int i = 0 ; i < n ; i++)
    {
        string s;
        cin >> s;
        // cout << s << endl;
        if(s[0] == '+' || s[1] == '+')
            x++;
        if(s[0] == '-' || s[1] == '-')
            x--;
    }
    cout << x << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
    solve();
        return 0;
}