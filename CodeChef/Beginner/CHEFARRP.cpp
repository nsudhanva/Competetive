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

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		
		int count = 0;

		for (int i = 0; i < n; ++i)
		{
			unsigned long long sum = 0, product = 1;
			for (int j = i; j < n; ++j)
			{
				sum = sum + a[j];
				product = product * a[j];	

				if(sum == product){
					count = count + 1;
				}
			}
		}

		cout << count << endl;

	}
}
