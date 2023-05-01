#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c;
    cin >> a >> b >> c;
    if(a != c and c != b and a != b)
        cout << "NO" << endl;
    else if(a == b and b == c)
    {
        cout << "YES" << endl;
        cout << a << " " << a << " " << a << endl;
    }
    else
    {
        
        if(((a == b) and (a >= c)) )
        {
            cout << "YES" << endl;
            cout << a << " " << c << " " << c << endl;
        }
        else if((a == c) and (a >= b))
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << b << endl;
        }
        else if((b == c) and (b >= a))
        {
            cout << "YES" << endl;
            cout << b << " " << a << " " << a << endl;
        }
        else
            cout << "NO" << endl;
    }
    
  
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}