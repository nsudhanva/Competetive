#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		cout << count(s.begin(), s.end(), '4') << endl;
	}
}
