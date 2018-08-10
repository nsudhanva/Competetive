#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	ULL n;
	cin >> n;

	while(n--){
		ULL a[3];
		cin >> a[0];
		cin >> a[1];
		cin >> a[2];

		sort(a, a + 3);

        a[0] = (a[0] % 1000000007) * ((a[1] - 1) % 1000000007);
		a[0] = (a[0] % 1000000007);

		a[0] = a[0] * ((a[2] - 2) % 1000000007);
 		a[0] = (a[0] % 1000000007);

        cout << a[0] <<endl;
	}
}
