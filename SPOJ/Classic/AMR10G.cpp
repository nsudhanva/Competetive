#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, k, i, diff, mindiff;
	int a[20000];
	cin >> t;

	while(t--) {
		cin >> n >> k;

		for(i = 0; i < n; i++)
            cin >> a[i];

		sort(a, a + n);
		mindiff = a[k - 1] - a[0];

		for(i = 0; i + k <= n; i++) {
			diff = a[i + k - 1] - a[i];
			mindiff = min(diff, mindiff);
		}

		cout << mindiff << endl;
	}
	return 0;
}
