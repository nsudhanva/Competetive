#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, x;
		cin >> n >> x;

		std::vector<int> v(n);

		int sum = 0;
		int small = INT_MAX;

		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
			sum = sum + v[i];
		}

		bool flag = false;
		int num = sum / x;
		float numx = float(sum)/ float(x);
		int temp = sum;

		for (int i = 0; i < n; ++i)
		{
			sum = sum - v[i];

			// cout << sum << endl;
			
			if(num == sum / x){
				flag = true;
			}

			sum = temp;
		}

		if(flag){
			cout << "-1" << endl;
		}
		else{
			cout << sum / x << endl;
		}


	}
}
