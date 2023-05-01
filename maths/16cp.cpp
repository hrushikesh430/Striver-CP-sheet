#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long sum = a+b+c+d;
    sum = sum/3;
    long long first,second,third;
    if(a == sum)
    {
        first = b+c-sum;
        second = b+d-sum;
        third = sum-first-second;
    }
    else if(b == sum)
    {
        first = a+c-sum;
        second = a+d-sum;
        third = sum-first-second;
    }
    else if(c == sum)
    {
        first = b+a-sum;
        second = a+d-sum;
        third = sum-first-second;
    }
    else
    {
        first = b+c-sum;
        second = b+a-sum;
        third = sum-first-second;
    }
    
    cout << first << " " << second << " " << third << endl;
    
    
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}