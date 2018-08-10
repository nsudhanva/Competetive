#include <bits/stdc++.h>

using namespace std;

unsigned long long GCD(unsigned long long a, unsigned long long b)
{
	if(b == 0){
		return a;
	}

	return GCD(b, a % b);
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long a, b, gcd, lcm;
		cin >> a >> b;
		gcd = GCD(a , b);
		lcm = (a * b) / (gcd);

		cout << gcd << " " << lcm << endl;
	}
}
