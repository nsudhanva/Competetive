#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		std::vector<string> road(n);
		std::vector<string> turn(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> turn[i];
			getline(cin, road[i]);
		}

		cout << "Begin" << road[n - 1] << endl;

		for (int i = 1; i < n; ++i)
		{
			if(turn[n - i] == "Right")
				cout << "Left";
			else
				cout << "Right";

			cout << road[n - 1 - i] << endl;
		}
	}
}
