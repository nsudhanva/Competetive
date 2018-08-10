#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k, n;
	cin >> k >> n;

	std::vector<string> a(n);
	std::vector<string> b(k);

	for (int i = 0; i < k; ++i)
	{
		cin >> b[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		bool flag = false;

		for (int j = 0; j < k; ++j)
		{
			if(a[i].find(b[j]) != string::npos){
				flag = true;
				break;
			}

			if(a[i].size() >= 47){
				flag = true;
			}
		}

		if(flag){
			cout << "Good" << endl;
		}
		else{
			cout << "Bad" << endl;
		}
	}
}
