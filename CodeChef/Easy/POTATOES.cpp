#include <bits/stdc++.h>

using namespace std;

int prime(int a)
{
	int b;
	for(b = 2; b <= sqrt(a); b++)
	{
		if(a % b == 0)
			return(0);
	}
	return(1);
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int x, y, z;
		cin >> x >> y;

		for(z = 1; z <= 1000; z++)
		{
			if(prime(x + y + z))
				break;
		}
		cout << z << "\n";
	}
} 
