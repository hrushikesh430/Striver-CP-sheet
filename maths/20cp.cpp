#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a;
    cin >> a;

    long long sum = 0;
    long long temp;
    sum += a/5;
    temp = a%5;
    sum += temp/4;
    temp = temp%4;
     sum += temp/3;
    temp = temp%3;
     sum += temp/2;
    temp = temp%2;
     sum += temp/1;
    temp = temp%1;
    // sum += temp/1;
    cout << sum << endl;
    

    
    
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}