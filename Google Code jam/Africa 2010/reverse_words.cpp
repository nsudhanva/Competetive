#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();

	string s[t];

	for (int i = 0; i < t; ++i)
	{
		getline(cin , s[i]);
		std::string out;
	    std::istringstream buf(s[i]);

	    for(auto i = std::istream_iterator<std::string>(buf); 
	             i != std::istream_iterator<std::string>();
	             ++i )
	        out = *i + ' ' + out;

	    std::ofstream outfile;

		outfile.open("B-large-practice.txt", std::ios_base::app);
		outfile << "Case #" << i + 1 << ": " <<  out << '\n';
	}
}
