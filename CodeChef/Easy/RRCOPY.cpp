#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long n, x;
		cin >> n;

		set<unsigned long long> s;

		for (unsigned long long i = 0; i < n; ++i)
		{
			cin >> x;
			s.insert(x);
		}

		cout << s.size() << endl;
	}
}
