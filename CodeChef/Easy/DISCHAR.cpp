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
		string s;
		cin >> s;

		set<char> a;

		for (int i = 0; i < s.size(); ++i)
		{
			a.insert(s[i]);
		}

		// for(auto x : a){
		// 	cout << x << " ";
		// }

		// cout << endl;

		cout << a.size() << endl;
	}
}
