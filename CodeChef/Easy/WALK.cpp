#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		long n, max = 0;
		cin >> n;

		std::vector<long> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		std::vector<long> b(n);

		for (int i = 0; i < n; ++i)
		{
			b[i] = a[i] + i;

			if(b[i] > max){
				max = b[i];
			}
		}

		cout << max << endl;


	}
}
