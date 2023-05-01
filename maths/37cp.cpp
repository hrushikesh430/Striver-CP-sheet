#include<bits/stdc++.h>
using namespace std;

void solve()
{
    
        long long r,b,g,w;
        cin >> r >> b>>g>>w;
        int odd = 0, even = 0;
        if(r%2)
            odd++;
        else
            even++;

        if(b%2)
            odd++;
        else
            even++; 
        if(g%2)
            odd++;
        else
            even++;
            
        if(w%2)
            odd++;
        else
            even++;
        
       if((even == 3 and odd == 1) or (even == 4))
       {
        cout << "Yes" << endl;
        return;
       }
       r--;b--;g--;w=w+3;
       if(r==-1 or b == -1 or g == -1 )
       {
        cout << "No" << endl;
        return;
       }
        even = 0,odd = 0;
        if(r%2)
            odd++;
        else
            even++;

        if(b%2)
            odd++;
        else
            even++; 
        if(g%2)
            odd++;
        else
            even++;
            
        if(w%2)
            odd++;
        else
            even++;
       if(even == 4 || even == 3)
       {
        cout << "Yes" << endl;
        return;
       }
       cout << "No" << endl;
       return;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}