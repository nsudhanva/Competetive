#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

bool isInFormat(string s)
{
	if(s.size() > 5){
		return false;
	}

	if(s[0] <= 'h' && s[0] >= 'a' && s[1] <= '8' && s[1] >= '1' && s[2] == '-' && s[3] <= 'h' && s[3] >= 'a' && s[4] <= '8' && s[4] >= '1'){
		return true;
	}

	return false;
}

bool isValidMove(string s)
{
	if((abs(s[0] - s[3]) == 1 && abs(s[1] - s[4]) == 2) || (abs(s[0] - s[3]) == 2 && abs(s[1] - s[4]) == 1)){
		return true;
	}

	return false;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();

	while(t--){
		string s;
		getline(cin, s);

		if(isInFormat(s)){
			if(isValidMove(s)){
				cout << "Yes" << endl;
			}
			else{
				cout << "No" << endl;
			}
		}
		else{
			cout << "Error" << endl;
		}
	}
}
