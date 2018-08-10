#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		long n, c, q;
		cin >> n >> c >> q;

		for (int i = 0; i < q; ++i)
		{
			unsigned long long l, r;
			cin >> l >> r;

			if(l <= c && c <= r){
				c = l + r - c;
			}
		}

		cout << c << endl;
		
	}
}
