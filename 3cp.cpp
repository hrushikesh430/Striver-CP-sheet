#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[5][5];
    int first ,second;
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
            first = i;
            second = j;
            }
        }
    }
    // cout << first << " " << second << endl;
    int ans = abs(2-first) + abs(2-second);
    cout << ans << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--)
    solve();
        return 0;
}