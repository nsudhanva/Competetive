#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (long int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		cin.ignore();
		cout << (s[0] - '0') + (s[s.length() - 1] - '0') << endl;
		s = "";
	}
}
