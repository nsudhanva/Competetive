#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

LL p(long long int n)
{ 
	if(n<0)
		return 0;
	else
		return(((n + 3) * (n + 2) * (n + 1)) / 6);
}
 
int main()
{ 
	LL a, b, c, n, t, co;
	cin >> t;

	while(t--)
	{ 
		cin >> n >> a >> b >> c;
		cout << (p(n) - p(n - a - 1) - p(n - b - 1) - p(n - c - 1)
				+ p(n - a - b - 2) + p(n - a - c - 2)
				+ p(n - b - c - 2) - p(n - a - b - c - 3)) << endl;
	}
}