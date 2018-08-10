#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
using namespace std;

int main()
{
	LL t;
	cin >> t;

	while(t--){
		LL n, sum = 0;
		cin >> n;

		std::vector<LL> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		sort(a.begin(), a.end());

		for (int i = n - 1; i >= 0; i = i - 2)
		{
			sum = sum + a[i];
		}

		cout << sum << endl;
	}
}
