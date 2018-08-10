#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		std::vector<unsigned long long> a(n);

		for (unsigned long long i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		sort(a.begin(), a.end());

		unsigned long long ans = a[1] - a[0], min = LONG_MIN;

		for (int i = 1; i < a.size(); ++i)
		{
			if(min > a[i] - a[i - 1]){
				min = a[i] - a[i - 1];
			}			
		}

		cout << min << endl;

	}
}
