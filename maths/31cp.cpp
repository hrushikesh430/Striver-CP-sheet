#include<bits/stdc++.h>
using namespace std;

void solve()
{
    
        long long cnt ;
        cin >> cnt;
        long long first=0,second=0,third=0;
        for(int i = 0 ;i < cnt ; i++)
        {
            for(int j =0 ;j< 3 ; j++)
            {
                int x;
                cin >> x;
                if(j == 0)
                {
                    first += x;
                }
                else if(j == 1)
                {
                    second += x;
                }
                else if(j == 2)
                    third += x;
               
            }
        }
        if(first == 0 and second == 0 and third == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
        
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}