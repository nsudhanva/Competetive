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
		map<int, int> c;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			c[a[i]]++;
		}

		int ans = 0;

		for(auto const& ele : c) 
		{
			if(ele.second > 0){
				ans++;
			}
		}

		cout << ans << endl;

	}
}