#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int find_sum(string s)
{
	int sum = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		sum = sum + int(s[i]);
	}

	return sum;
}

int main()
{
	int n;
	cin >> n;

	string s[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}

	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n - 1; ++j)
		{
			if(!(s[i].find(s[j]) != string::npos)){
				sum = sum + find_sum(s[i]);
			}
		}
	}

	cout << sum << endl;
}
