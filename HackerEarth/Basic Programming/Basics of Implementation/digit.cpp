#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	string x;
	cin >> x;

	int k;
	cin >> k;

	for (int i = 0; i < k; ++i)
	{
		if(x[i] == '9'){
			k++;
			continue;			
		}

		x[i] = '9';
	}

	cout << x << endl;
}
