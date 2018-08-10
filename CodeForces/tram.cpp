#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int n;
	cin >> n;

	std::vector<int> a(n);
	std::vector<int> b(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i] >> b[i];
	}

	int passengers = 0;
	int maxx = 0;

	for (int i = 0; i < n; ++i)
	{
		passengers = passengers - a[i] + b[i];
		maxx = max(maxx, passengers);
	}

	cout << maxx << endl;
}
