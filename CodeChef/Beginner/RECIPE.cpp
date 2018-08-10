#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
		return a;
	else
	{
		return gcd(b, a % b);
	}
}

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int n;
		cin >> n;

		vector<int> a(n);
		for (int j = 0; j < n; ++j)
		{			
			cin >> a[j];
		}

		int g = a[0];
		for (int i = 1; i < n; ++i)
		{
			g = gcd(g, a[i]);
		}

		for (int i = 0; i < n; ++i)
		{
			cout << a[i] / g << " ";
		}

		cout << endl;
	}

}
