#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		long n, m, c, count = 0;
		cin >> n >> m >> c;

		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				if(i * j > c)
					break;
				if(i * j == c){
					count++;
				}
			}
		}

		cout << count << endl;
	}
}
