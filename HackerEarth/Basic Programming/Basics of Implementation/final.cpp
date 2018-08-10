#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	string s;
	cin >> s;

	int x = 0, y = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i] == 'L'){
			x--;
		}

		if(s[i] == 'R'){
			x++;
		}

		if(s[i] == 'D'){
			y--;
		}

		if(s[i] == 'U'){
			y++;
		}
	}

	cout << x << " " << y << endl;
}
