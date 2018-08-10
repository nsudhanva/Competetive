#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		long n;
		cin >> n;

		std::vector<long> v;

		long ans = LONG_MAX, y;

		for (long i = 1; i <= sqrt(n); ++i)
		{
			if(n % i == 0){
				y = n / i;
				ans = min(ans, abs(y - i));	
			}			
		}

		cout << ans << endl;

	}
}
