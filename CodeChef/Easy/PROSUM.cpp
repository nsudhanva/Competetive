#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		LL n, count1 = 0, count2 = 0, count3 = 0;
		cin >> n;

		std::vector<LL> a(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];

			if(a[i] == 1){
				count1++;
			}

			if(a[i] == 2){
				count2++;
			}

			if(a[i] == 0){
				count3++;
			}
		}

		n = n - count1 - count2 - count3;

		LL ans = count2 * n + (n * (n - 1) / 2);
		cout << ans << endl;

	}
}

