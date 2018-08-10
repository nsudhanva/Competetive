#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; 
	cin >> t;

	while(t--)
	{
		double s, sg, fg, d, ti, dist;
		double speed;

		cin >> s >> sg >> fg >> d >> ti;

		dist = 50 * d;
		speed = (dist * 18) / (ti * 5);
		speed = s + speed;

		if(abs(sg - speed) == abs(fg - speed))
			cout << "DRAW" << endl;
		else if(abs(sg - speed) > abs(fg - speed))
			cout << "FATHER" << endl;
		else
			cout << "SEBI" <<endl;
	}
}  