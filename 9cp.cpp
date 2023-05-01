#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int min = INT_MAX,max = INT_MIN,minInd = -1, maxInd = -1;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
        if(v[i] < min)
        {
            min = v[i];
        }
        if(v[i]>max )
        {
            max = v[i];
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        if(v[i] == min)
        {
            minInd = i;
            // break;
        }
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(v[i] == max)
        {
            maxInd = i;
            // break;
        }
    }

    if(minInd < maxInd)
    {
        cout << (maxInd)+(n-1-minInd)-1 << endl;
        // return;
    }
    else if(minInd > maxInd)
    {
        cout << (maxInd)+(n-1-minInd) << endl;
    }
    

}

int main()
{
    solve();
    return 0;
}