#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long n, k;
		cin >> n;

		std::vector<int> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		cin >> k;

		unsigned long long ans = a[k - 1], pos;

		sort(a.begin(), a.end());

		for (int i = 0; i < n; ++i)
		{
			if(a[i] == ans){
				pos = i;
			}
		}

		cout << pos + 1 << endl;

	}
}
