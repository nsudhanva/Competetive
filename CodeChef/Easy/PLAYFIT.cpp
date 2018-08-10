#include <bits/stdc++.h>

typedef unsigned long long ULL;
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		ULL n;
		cin >> n;

		ULL x, y, max = 0;
		cin >> x;

		for (int i = 1; i < n; ++i)
		{
			ULL a;
			cin >> a;

			if(x < a){
				y = a - x;

				if(max < y){
					max = y;
				}

				x = min(x, a);
			}
			else{
				x = min(x, a);
			}
		}

		if(max == 0){
			cout << "UNFIT" << endl;
		}
		else
			cout << max << endl;
	}
}
