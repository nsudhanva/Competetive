#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		LL n;
		cin >> n;

		std::vector<LL> a(n);
		std::vector<LL> b;

		for (LL i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		b.push_back(6);
		b.push_back(2);
		b.push_back(5);
		b.push_back(5);
		b.push_back(4);
		b.push_back(5);
		b.push_back(6);
		b.push_back(3);
		b.push_back(7);
		b.push_back(6);

		LL minx = b[a[0]];

		for (LL i = 1; i < n; ++i)
		{
			minx = min(minx, b[a[i]]);
		}

		for (LL i = 0; i < 10; ++i)
		{
			if(b[i] == minx){
				cout << i << endl;
				break;
			}
		}
 	}
}
