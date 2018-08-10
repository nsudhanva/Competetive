#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int temp, sum = 0, mini;
		std::vector<int> x(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> x[i];			
			sum = sum + x[i];			
		}

		mini = *min_element(x.begin(), x.end());
		cout << sum - n * mini << endl;
	}
}
