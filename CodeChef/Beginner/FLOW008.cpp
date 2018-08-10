#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		if(x < 10){
			cout << "What an obedient servant you are!" << endl;
		}
		else{
			cout << "-1" << endl;
		}
	}
}

