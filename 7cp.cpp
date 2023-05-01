    #include<bits/stdc++.h>
    using namespace std;

    void solve()
    {
        int n,m;
        cin >> n >> m;
        int flag = 1;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(i%2 == 0)
                {
                    cout << '#';
                }
                if(i%2 and flag == 0)
                {
                    if(j == m-1)
                    cout << '#';
                    else
                    cout << '.';
                }
                else if(i%2 and flag == 1)
                {
                    if(j == 0)
                    cout << '#';
                    else
                    cout << '.';
                }
            }

            if(i%2 == 0)
            flag = !flag;
            cout << endl;
        }
        cout << endl;
    }

    int main()
    {
        solve();
        return 0;
    }