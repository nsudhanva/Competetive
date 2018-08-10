#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> a(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	vector<int> f(m), p(m);
	vector<string> s(m);
	map<int, string, greater<int> > first;
	map<int, string, greater<int> > second;

	for (int i = 0; i < m; ++i)
	{
		cin >> f[i] >> p[i] >> s[i];
		if(find(a.begin(), a.end(), f[i]) != a.end()){
			first[p[i]] = s[i];
		}
		else{
			second[p[i]] = s[i];
		}
	}

	for (auto i : first)
	{
		cout << i.second << endl;
	}

	for (auto i : second)
	{
		cout << i.second << endl;
	}

}
