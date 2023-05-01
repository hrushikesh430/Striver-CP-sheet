#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<string> v;
    if(s.size() == 1)
    {
        cout << 1 << endl;
        cout << s << endl;
        return;
    }
    int ind = s.size()-1;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] != '0')
        {
            string temp;
            temp += s[i];
            for(int j =0  ;j < ind ; j++)
                temp += '0';
            v.push_back(temp);
        }
            ind--;
    }
    cout << v.size() << endl;
    for(int i =0  ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    solve();
}