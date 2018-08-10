#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		double a, b, discount;
		cin >> a >> b;

		if(a > 1000){
			discount = (a * b) * 0.1;
			cout << << fixed << setprecision(6) << (a * b) - discount << endl;
		}
		else{
			cout << fixed << setprecision(6) << (a * b) << endl;
		}
	}
}
