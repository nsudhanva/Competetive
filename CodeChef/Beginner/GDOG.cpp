#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;

		cout << n % (n / (n / k + 1) + 1) << endl;
	}
}
