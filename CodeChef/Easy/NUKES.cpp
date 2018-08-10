#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long a, n, k, d;
	cin >> a >> n >> k;

	while(k--){
		d = a % (n + 1);
		cout << d << endl;
		a = a / (n + 1);
	}
}
