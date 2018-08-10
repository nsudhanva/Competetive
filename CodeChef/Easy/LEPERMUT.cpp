#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		bool flag = false;
		int count1 = 0, count2 = 0;

		std::vector<int> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		if(n == 1){
			cout << "YES" << endl;
		}
		else{
			for (int i = 0; i < n - 1; ++i)
			{
				for (int j = i + 1; j < n; ++j)
				{
					if(a[i] > a[j]){
						count1++;
					}
				}
			}

			for (int i = 1; i < n; ++i)
			{
				if(a[i - 1] > a[i]){
					count2++;
				}
			}

			if(count1 == count2){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}	

	}
}
