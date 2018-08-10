#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		double LS, B;
		cin >> LS >> B;

		double RSmin = sqrt(abs(B * B - LS * LS));
		double RSmax = sqrt(B * B + LS * LS);

		cout << RSmin << " " << RSmax << endl;
	}
}
