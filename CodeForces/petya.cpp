#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	std::transform(a.begin(), a.end(), a.begin(), ::tolower);
	std::transform(b.begin(), b.end(), b.begin(), ::tolower);

	if(std::string((a)) > std::string((b)))
		cout << "1" << endl;
	else if(std::string((a)) < std::string((b)))
		cout << "-1" << endl;
	else
		cout << "0" << endl;

}
	