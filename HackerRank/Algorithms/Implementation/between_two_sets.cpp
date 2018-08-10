#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
	int n, m;
	cin >> n >> m;

	std::vector<int> a(n);
	std::vector<int> b(m);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}

	int count = 0;

	
}
