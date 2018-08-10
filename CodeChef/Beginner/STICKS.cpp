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
		map<int, int> m;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			m[a[i]]++;
		}

		vector<int> max;

		for(auto const& x : m){
			// cout << "Value: " << x.second << endl;
			// cout << "Mod: " << x.second % 2 << endl;
			if(x.second % 2 == 0){
				// cout << "Key: " << x.first << endl;
				max.push_back(x.first);

				if(x.second > 2){
					max.push_back(x.first);
				}
			}
		}

		// cout << "Max: ";
		// for (int i = 0; i < max.size(); ++i)
		// {
		// 	cout << max[i] << " ";
		// }
		// cout << endl;

		sort(max.begin(), max.end());

		if(max.size() < 2){
			cout << "-1" << endl;
		}
		else{
			cout << max[max.size() - 1] * max[max.size() - 2] << endl;
		}

		
	}
}
