#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    n = n/2;
    int even = n*(n+1);
    int odd = (n-1)*(n-1);
    if((even-odd)%2)
    {
        // cout << "YES" << endl;
        int evenCnt = 2;
        int oddCnt = 1;
        vector<int> v;
        for(int i = 0 ; i < 2*n-1 ; i++)
        {
            if(i < n){
                // cout << evenCnt << " ";
                v.push_back(evenCnt);
                evenCnt += 2;
            } 
            else{
                // cout << oddCnt << " ";
                v.push_back(oddCnt);
                oddCnt += 2;

            }
        }
        if((oddCnt-2) == (even-odd))
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for(auto x : v)
                cout << x << " ";

            cout<< even-odd << endl;
        }            
    }
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