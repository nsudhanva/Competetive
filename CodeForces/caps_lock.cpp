#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	string s;
	cin >> s;

	bool lower = false;

	for (int i = 0; i < s.size(); ++i)
	{
		if(int(s[i]) > 96){
			lower = true;
		}
	}

	if(lower){		
		for (int i = 0; i < s.size(); ++i)
		{
			s[i] = tolower(s[i]);
		}
	}
	else{
		for (int i = 0; i < s.size(); ++i)
		{
			s[i] = toupper(s[i]);
		}
	}

	s[0] = toupper(s[0]);
	cout << s << endl;
}
