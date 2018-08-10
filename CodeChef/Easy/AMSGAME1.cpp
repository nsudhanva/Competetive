#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, sub;
		cin >> n;

		std::vector<int> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		int res = a[0];

        for(int i = 1; i < n; ++i) 
        	res = __gcd(res, a[i]);

        cout << res << endl;
	}
}
