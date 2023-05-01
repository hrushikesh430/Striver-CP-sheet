#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c;
    cin >> a>>b>>c;
    vector<int> v(a);
    for(int i = 0 ; i < a ; i++)
        cin >> v[i];

    sort(v.begin(),v.end());

    long long first = (((b/(c+1))*c) + (b%(c+1)));
    // cout << b-first << " this is "<< endl;
    long long total = (first*v[a-1]) + (b-first)*v[a-2];
    cout << total << endl;
    

    
    
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}