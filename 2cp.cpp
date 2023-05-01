#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string n;
    cin >> n;
  
  
    // while(n>0)
    // {
    //     // cout << n%10 << endl;
    //     v.push_back((n%10));
    //     n = n/10;
    // }
    // reverse(v.begin(),v.end());
    int first = n[0]-'0';
    if(first != 9 and first >=  5)
    {
        n[0] = (9-first)+'0';
    }
    
    for(int i =1 ; i < n.size() ; i++)
    {
         first = n[i]-'0';
        // cout << 9-first << endl;
        if(first < 5)
            continue;
          
            n[i] = (9-first)+'0';
          
       
        
    }
    cout << n << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
    solve();
        return 0;
}