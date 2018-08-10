#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long n, sum = 0, sum2;
	cin >> n;

	std::vector<unsigned long long> a(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		sum = sum + a[i];
	}

	sum2 = (n * (n + 1)) / 2;

	if(sum == sum2){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}


}
