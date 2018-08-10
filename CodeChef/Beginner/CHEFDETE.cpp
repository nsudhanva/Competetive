#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	vector<bool> r(n + 1, false);

	for (int i = 0; i < n; ++i)
	{		
		cin >> a[i];
		r[a[i]] = true;
	}

	for (int i = 0; i < n + 1; ++i)
	{
		if(r[i] == false){
			cout << i << " ";
		}
	}
	cout << endl;

}
