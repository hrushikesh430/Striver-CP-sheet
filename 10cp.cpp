#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int flag = 0;
    for(int i =0  ; i < n ; i++)
    {
        cin >> v[i];
        if(v[i] == 1)
            flag = 1;

    }
    if(flag)
        cout << "HARD" << endl;
    else 
        cout << "EASY" << endl;

}

int main()
{
    solve();
    return 0;
}