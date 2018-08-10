#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		double p, s, temp;
		cin >> p >> s;

		temp = (p - sqrt(p * p - 24 * s)) / 12;
		cout << setprecision(2) << fixed << (s * temp/2 - p * temp * temp / 4 + temp * temp * temp) << endl;
	}
}
