#include <bits/stdc++.h>

typedef unsigned long long ULL;
using namespace std;

bool isEven(int n)
{
	if(n % 2 == 0){
		return true;
	}

	return false;
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		ULL n, k, count = 0;
		cin >> n >> k;

		std::vector<ULL> a(n);

		for (int i = 0; i < n; ++i)
		{
			ULL a;
			cin >> a;

			if(isEven(a)){
				count++;
			}
		}

		if(count < k || k == 0 && count == n){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}
