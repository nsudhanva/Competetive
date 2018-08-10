#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int sum_of_digits(int n) {
	static int sum = 0;

	if (n == 0) {
		return 0;
	}

	sum = n % 10 + sum_of_digits(n / 10);

	return sum;
}

int convert(int n, int x)
{	
	int rem, num = 0, i = 1;

	while(1){
		rem = n % x;
		n = n / x;

		num += rem * i;
		if(n == 0){
			break;
		}

		i = i * 10;
	}	

	return num;
}

int main()
{	
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int base, sum = 0, count = 0;

		for (int i = 2; i < n; ++i)
		{
			base = convert(n, i);
			// cout << base << endl;
			sum = sum + sum_of_digits(base);
			// cout << sum << endl;
		}

		int gcd = __gcd(sum, (n - 2));
		sum = sum / gcd;
		n = (n - 2) / gcd;

		cout << n << endl;
	}
}