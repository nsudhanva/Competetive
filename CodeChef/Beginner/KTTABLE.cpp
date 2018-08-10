#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int count = 0;
		vector<int> a(n), b(n);
		a.push_back(0);

		for (int i = 1; i <= n; ++i)
		{
			cin >> a[i];
		}

		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
		}

		for (int i = 0; i < n; ++i)
		{
			int diff = a[i + 1] - a[i];
			/*cout << "Diff: " << diff << endl;
			cout << "b[i]: " << b[i] << endl;
			cout << "a[i]: " << a[i] << endl;
			cout << "a[i + 1]: " << a[i + 1] << endl;*/
			if(b[i] <= diff){
				count++;
			}
			/*cout << "Count: " << count << endl;*/
		}

		cout << count << endl;
	}	
}
