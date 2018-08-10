#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		std::vector<int> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());

		int ans = 0;

		for (int i = 0; i < n; ++i)
		{
			if(i % 4 < 2){
				ans += a[i];
			}
		}

		cout << ans << endl;

	}
}
