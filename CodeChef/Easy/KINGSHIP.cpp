#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin >> n;
		vector<long long> v;

		for(int i = 0; i < n; i++)
		{
			long long temp;
			cin >> temp;
			v.push_back(temp);
		}

		sort(v.begin(),v.end());
		long long sum = 0;

		for(long i = 1; i < n; i++)
		{
			sum = sum + v[i];
		}

		long long ans = sum * v[0];
		cout << ans << endl;
	}
}
