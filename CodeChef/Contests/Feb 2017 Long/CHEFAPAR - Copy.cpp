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
		LL n, fine = 0, maintainance = 0, count0 = 0, count1 = 0;
		cin >> n;

		std::vector<LL> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];

			if(a[i] == 0){
				count0++;
			}
			else{
				count1++;
			}
		}

		if(a[0] == 1 && a[1] == 0){
			count1--;
		}

		fine = 100 * count1;
		maintainance = 1100 * count0;

		if(count1 == n){
			cout << "0" << endl;
		}
		else{
			cout << maintainance + fine << endl;
		}

	}
}
