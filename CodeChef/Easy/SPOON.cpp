#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int r, c;
		cin >> r >> c;

		string s[r][c];

		bool flag = false;

		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				cin >> s[i][j];
			}
		}

		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j < c - 5; ++j)
			{
				if(s[i][j] == "s" || s[i][j] == "S" 
					&& s[i][j + 1] == "p" || s[i][j + 1] == "P" 
					&& s[i][j + 2] == "o" || s[i][j + 2] == "O" 
					&& s[i][j + 3] == "o" || s[i][j + 3] == "O"					
					&& s[i][j + 4] == "n" || s[i][j + 4] == "N"){
					flag = true;
				}
			}
		}

		for (int i = 0; i < r - 5; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				if(s[i][j] == "s" || s[i][j] == "S" 
					&& s[i + 1][j] == "p" || s[i + 1][j] == "P" 
					&& s[i + 2][j] == "o" || s[i + 2][j] == "O" 
					&& s[i + 3][j] == "o" || s[i + 3][j] == "O"					
					&& s[i + 4][j] == "n" || s[i + 4][j] == "N"){
					flag = true;
				}
			}
		}

		if(flag){
			cout << "There is a spoon!" << endl;
		}
		else{
			cout << "There is indeed no spoon!" << endl;
		}
	}
}
