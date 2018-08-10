#include <bits/stdc++.h>

using namespace std;

int main()
{
	long n;
	cin >> n;

	int count = 0;

	while(n--){
		float x1, x2, x3, y1, y2, y3; 
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		float a, b, c;

		a = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		b = ((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
		c = ((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

		if(a == b + c || b == a + c || c == a + b){
			count++;
		}
	}

	cout << count << endl;
}
