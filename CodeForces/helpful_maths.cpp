#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	string s;
	cin >> s;

	char chars[] = "+";

	s.erase(std::remove(s.begin(), s.end(), '+'), s.end());

	sort(s.begin(), s.end());

	for (int i = 0; i < s.size(); ++i)
	{
		if(i % 2 != 0){
			s.insert(i,"+");
		}
	}

	cout << s << endl;
}
