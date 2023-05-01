#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin >> n;
   int arr[n];
   int evenNo = 0, oddNo = 0 , evenT = 0, oddT = 0;

   for(int i = 0 ; i < n ; i++)
   {
        cin >> arr[i];
        if(arr[i]%2)
            oddNo++;
        else
            evenNo++;
        if((arr[i]%2==1 and i%2==0))
            oddT++;
        else if(arr[i]%2 == 0 and i%2 == 1)
            evenT++;
   }
   int oddPos = n/2;
   int evenPos = n- oddPos ;
   if(oddPos != oddNo || evenPos != evenNo)
    {
        cout << -1 << endl;
    }
    else
    {
       if(oddT == evenT)
        cout << evenT << endl;
        else
        cout << -1 << endl; 
    }
  
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}