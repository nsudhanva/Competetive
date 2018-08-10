#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<int> a(n);
		int sum = 0;
		bool flag = false;
		bool flag2 = false;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			sum = sum + a[i];

			if(a[i] <= 2){
				flag = true;
			}

			if(a[i] == 5){
				flag2 = true;
			}
		}

		double avg = double(sum) / n;

		if(avg < 4 || flag || !flag2){
			cout << "No" << endl;
		}
		else{
			cout << "Yes" << endl;
		}


	}	
}
