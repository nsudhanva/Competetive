#include <bits/stdc++.h>

using namespace std;

int sum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)	
	{
		sum = sum + i;
	}
	return sum;
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		int d, n, nsum = 0;
		cin >> d >> n;
		
		for (int i = 0; i < d; ++i)
		{
			nsum = sum(n);
			n = nsum;
		}

		cout << nsum << endl;
	}
}
