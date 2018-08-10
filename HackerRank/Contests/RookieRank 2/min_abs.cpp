#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	LL n;
	cin >> n;

	std::vector<LL> a(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	LL diff = LONG_MAX;

	for (int i = 0; i < n - 1; ++i)
	{
		if(abs(a[i] - a[i + 1]) < diff){
			diff = (abs(a[i] - a[i + 1]));
		}
	}

	cout << diff << endl;
}
