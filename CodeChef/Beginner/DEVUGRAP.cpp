#include <bits/stdc++.h>

using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long n, k, ans = 0, r;
		cin >> n >> k;

		vector<unsigned long long> a(n);

		for (unsigned long long i = 0; i < n; ++i)
		{
			cin >> a[i];
			r = a[i] % k;

			if(a[i] >= k){
				ans = ans + min(r, k - r);
			}
			else{
				ans = ans + (k - r);
			}
		}

		cout << ans << endl;
	}
}
