#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int a[n * n], b[n * n];

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				int k;
				cin >> k;

				a[k - 1] = i;
				b[k - 1] = j;
			}
		}

		int step = 0;
		for (int i = 0; i < n * n - 1; ++i)
		{
			step = step + fabs(a[i] - a[i + 1]) + fabs(b[i] - b[i + 1]);
		}

		cout << step << endl;

	}	
}
