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
		LL n, m;
		cin >> n >> m;

		std::vector<LL> a(n);

		for (LL i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		LL sum = accumulate(a.begin(), a.end(), 0);

		sum = sum + m;

		if(sum % n == 0){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
}
