#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
	if(n == 0 || n == 1){
		return 1;
	}
	else{
		return fact(n - 1) * n;
	}
}


int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		cout << fact(x) << endl;
	}
}
