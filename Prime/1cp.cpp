#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n = 100000000;
bool sieve[100000000] ;

void createSieve()
{
	for (int i = 0 ; i <= n ; i++)
	{
		sieve[i] = true;
	}
	sieve[0] = sieve[1] = false;
	for (int i = 2 ; i * i <= n ; i++)
	{
		if (sieve[i] == true)
		{
			for (int j = i * i ; j <= n ; j += i)
			{
				sieve[j] = false;
			}
		}
	}

}

vector<int> generatePrime(int n)
{
	vector<int> ds;
	for (int i = 2 ; i <= n ; i++)
	{
		if (sieve[i] == true)
		{
			ds.push_back(i);
		}
	}
	return ds;
}

void solve()
{

	for (ll i = 0 ; i < n ; i++)
	{
		if (sieve[i] == 1)
		{
			cout << i << endl;
		}
	}





}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	createSieve();
	// int t;
	// cin >> t;
	// while (t--) {
	solve();

	// }


}