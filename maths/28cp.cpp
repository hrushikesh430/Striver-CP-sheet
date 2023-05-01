#include<bits/stdc++.h>
using namespace std;



void solve()
{
   string n;
   cin >> n;
   int arr[n.size()];
   for(int i =0 ; i < n.size() ; i++)
    arr[i] = (n[i]-'0');
//    int temp = n;

   cout << next_permutation(arr,arr+n.size()) << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}