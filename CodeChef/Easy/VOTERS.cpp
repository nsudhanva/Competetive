#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	std::vector<int> a(n1), b(n2), c(n3);
	map<int, int> m;

	for (int i = 0; i < n1; ++i)
	{
		cin >> a[i];
		m[a[i]]++;
	}

	for (int i = 0; i < n2; ++i)
	{
		cin >> b[i];
		m[b[i]]++;
	}

	for (int i = 0; i < n3; ++i)
	{
		cin >> c[i];
		m[c[i]]++;
	}

	int count = 0;

	for(auto i : m){
		// cout << i.first << " " << i.second << endl;
		if(i.second > 1){
			count++;
		} 
	}

	cout << count << endl;

	for(auto i : m){
		if(i.second > 1)
			cout << i.first << endl;
	}

}
