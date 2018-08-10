#include <bits/stdc++.h>

typedef unsigned long long ULL;
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		ULL n, count = 1;
		cin >> n;

		std::vector<ULL> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		ULL g = a[0];

		for (int i = 1; i < n; ++i)
		{
			g = __gcd(g, a[i]);
		}

		if(g == 1){
			cout << n << endl;
		}
		else{
			cout << "-1" << endl;
		}
	}
}
