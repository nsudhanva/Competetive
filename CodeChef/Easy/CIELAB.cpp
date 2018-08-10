#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int x = a - b;

	if(x % 10 != 9){
		x++;
	}
	else{
		x--;
	}

	cout << x << endl;
}
