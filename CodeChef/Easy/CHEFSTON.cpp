#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	LL t;
	cin >> t;

	while(t--){
		LL n, k, ans = LLONG_MIN;
		cin >> n >> k;

		std::vector<LL> a(n);
		std::vector<LL> b(n);

		for (LL i = 0; i < n; ++i)
		{			
			cin >> a[i];
		}

		for (LL i = 0; i < n; ++i)
		{			
			cin >> b[i];
		}

		for (LL i = 0; i < n; ++i)
		{			
			ans = max(ans, (k / a[i]) * b[i]);
		}

		cout << ans << endl;
	}
}
