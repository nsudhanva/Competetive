#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	std::vector<int> a(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		if(a[i] >= a[k - 1] && a[i] > 0){
			count++;
		}
	}

	cout << count << endl;
}