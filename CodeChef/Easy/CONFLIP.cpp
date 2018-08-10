#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long g, i, n, q;
		cin >> g;

		while(g--)
		{
			cin >> i >> n >> q;

			if(n % 2 == 0 || i == q){
				cout << n / 2 << endl;
			}
			else{
				cout << (n / 2 + 1) << endl;
			}
		}
	}
}
