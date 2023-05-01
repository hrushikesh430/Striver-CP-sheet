    #include<bits/stdc++.h>
    using namespace std;

    void solve()
    {
        int x,y,z;
        cin >> x >> y >> z;
        int ans = min(x,y);
        int ans1 = max(x,y);
        ans1 = max(ans1,z);
        ans = min(ans,z);
        cout << abs(ans-ans1) << endl;

        // int f = abs(ans-x) + abs(ans-y) + abs(ans-z);
        // cout << f << endl;
    }

    int main()
    {
        solve();
        return 0;
    }