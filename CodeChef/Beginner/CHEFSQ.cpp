#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int count = 0;
		int n;
		cin >> n;
		std::vector<int> a(n), c;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		int f;
		cin >> f;
		std::vector<int> b(f);

		for (int i = 0; i < f; ++i)
		{
			cin >> b[i];
		}

		for (int i = 0; i < f; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if(b[i] == a[j]){
					count++;
					a[j] = 0;
					break;
				}
			}
		}

		if(count == f){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
}	
