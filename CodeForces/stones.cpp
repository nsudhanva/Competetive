#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int n;
	cin >> n;

	string a;
	cin >> a;

	int count = 0;

	for (int i = 0; i < n - 1; ++i)
	{
		if(a[i] == 'R' && a[i + 1] == 'R' || a[i] == 'G' && a[i + 1] == 'G' || a[i] == 'B' && a[i + 1] == 'B'){
			count++;
		}
	}

	cout << count << endl;
}
