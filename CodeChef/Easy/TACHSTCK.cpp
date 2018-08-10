#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long n, d, x, count = 0;
	cin >> n >> d;

	std::vector<unsigned long long> a(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++)
	{
		if(i + 1 != n){
			if(a[i + 1] - a[i] <= d){
				count++;
				i++;
			}
		}
	}

	cout << count << endl;


}
