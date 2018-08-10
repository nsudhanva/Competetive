#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int r, x1, x2, x3, y1, y2, y3, count = 0;
		cin >> r >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) <= r * r) 
		 	count++;
		if((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3) <= r * r) 
			count++;
		if((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1) <= r * r) 
			count++;

		if(count > 1) 
			cout << "yes" << endl;
		else 
			cout << "no" << endl;

	}
}
