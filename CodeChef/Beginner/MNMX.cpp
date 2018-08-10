#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long n;
		cin >> n;

		vector<unsigned long long> a(n);
		unsigned long long minCost = 0;

		for (unsigned long long i = 0; i < n; ++i)
		{
			cin >> a[i];			

			if(a[i] < a[minCost]){
				minCost = i;
			}
		}

		cout << a[minCost] * (n - 1) << endl;
	}
}
