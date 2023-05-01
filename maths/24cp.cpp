#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c;
    cin >> a>>b>>c;
    
    long long total = (a/c) + (b/c);
    long long mini = c-max(a%c,b%c);
    if(mini > min(a%c,b%c))
        mini  = 0;
    if(mini == c)
        mini = 0;
    total = total + (a%c + b%c)/c;
    cout << total << " " << mini << endl;    

    
    
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}