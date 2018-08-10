#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long n;
		cin >> n;

		vector<unsigned long long> a(n);

		for (unsigned long long i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		unsigned long long ans = ULLONG_MAX;

		for (unsigned long long i = 0; i < n; ++i)
		{
			for (unsigned long long j = i + 1; j < n; ++j)
			{
				ans = min(ans, (a[i] * a[j]) / std::__gcd(a[i] , a[j]));
			}
		}

		cout << ans << endl;

	}
}
