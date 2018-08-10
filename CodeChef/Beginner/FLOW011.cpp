#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		long double BS, HRA, DA, GR;

		cin >> BS;

		if(BS < 1500){
			DA = BS * 0.9;
			HRA = BS * 0.1;
		}
		else if(BS >= 1500){
			DA = BS * 0.98;
			HRA = 500;
		}

		GR = BS + HRA + DA;

		cout << GR << endl;
	}
}
