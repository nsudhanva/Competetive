#include <bits/stdc++.h>

using namespace std;

int sum = 0,rem;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		int num = 0, r;
		while(x)
		{
			r = x % 10;
			num = num * 10 + r;
			x = x / 10;
		}

		cout << num << endl;
	}
}
