#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;;

		vector<int> a(n);

		int count = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];

			if(a[i] == 1){
				count++;
			}
		}

		if(count % 2 == 0){
			cout << n - count << endl;
		}
		else{
			cout << count << endl;
		}

	}
}