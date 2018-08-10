#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		vector<int> a(x);

		for (int i = 0; i < x; ++i)
		{
			cin >> a[i];
		}

		sort(a.begin(), a.end());
		cout << a[0] + a[1] << endl;
	}
}
