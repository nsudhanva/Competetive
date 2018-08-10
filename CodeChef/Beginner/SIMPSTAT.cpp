#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;
		double sum = 0;

		vector<double> a(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		sort(a.begin(), a.end());

		for (int i = k; i < n - k; i++)
            sum += a[i];

        sum /= (n - 2 * k);
        cout << fixed << setprecision(6) << sum << endl;
	}
}
