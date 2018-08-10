#include <bits/stdc++.h>

using namespace std;

int sum_of_digits(int x)
{	
	if(x < 10){
		return x;
	}
	else {
		return x % 10 + sum_of_digits(x / 10);
	}
}

int main()
{
	int n, x;
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		cout << sum_of_digits(x) << endl;
	}

}
