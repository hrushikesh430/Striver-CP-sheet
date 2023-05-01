#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long k,r;
    cin >> k >> r;

    int i = 2,count = 1,value = k;
   while(true){
        
        if((value)%10 == 0)
        {
            cout << count << endl;
            break;
        }
        
        if((value)%10 == r)
        {
            cout << count << endl;
            break;
        }
        value = k*i;
        i++;
        count++;
    }
    
    
    
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}