#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) 
	{
		int d[3];

		for (int i = 0; i < 3; ++i) 
		{
			cin >> d[i];
		}

		sort(d, d + 3);
		
		int ans = max(0, d[2] - d[1] - d[0]);
		cout << ans << endl;
	}
}
