#include <bits/stdc++.h>

using namespace std;

string find_day(int n)
{
	int diff = n - 1900;

	for (int i = 1904; i < n; ++i)
	{
		if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
			diff++;
		}
	}
	diff = diff % 7;

	switch(diff){
		case 0: return "monday";
				break;
		case 1: return "tuesday";
				break;
		case 2: return "wednesday";
				break;
		case 3: return "thursday";
				break;
		case 4: return "friday";
				break;
		case 5: return "saturday";
				break;
		case 6: return "sunday";
				break;						
	}


}

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		cout << find_day(n) << endl;
	}
}
