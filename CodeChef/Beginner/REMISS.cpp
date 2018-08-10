#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		unsigned long long a, b, x;
		cin >> a >> b;

		if(a > b){
			x = a;
		}
		else{
			x = b;
		}

		cout << x << " " << a + b << endl;
	}
}
