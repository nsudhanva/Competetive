#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long n, count = 0;
		cin >> n;

		std::vector<unsigned long long> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		count = n * (n - 1)/ 2;
		cout << count << endl;
	}
}
