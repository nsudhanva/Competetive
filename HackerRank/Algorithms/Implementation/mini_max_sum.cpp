#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long a[5], max, min, sum = 0;
	cin >> a[0];

	max = a[0]; min = a[0]; sum = sum + a[0];

	for (int i = 1; i < 5; ++i)
	{
		cin >> a[i];
		if(max < a[i]){
			max = a[i];
		}
		if(min > a[i]){
			min = a[i];
		}
		sum = sum + a[i];
	}

	cout << sum - max << " " << sum - min;
}
