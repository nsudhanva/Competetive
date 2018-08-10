#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long n, m;
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		unsigned long long count = 0;

		unsigned long long q;
		cin >> q;

		unsigned long long l = max(q - n, n + 1);
		unsigned long long r = min(q - 1, 2 * n);

		if(l > r){
			count = 0;
		}
		else{
			count = r - l + 1;
		}

		cout << count << endl;

	}

}
