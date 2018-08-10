#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	LL t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		string temp = s;
		reverse(s.begin(), s.end());

		for (LL i = 0; i < s.size(); ++i)
		{
			// cout << "Temp[i]: " << temp[i] << " ";
			// cout << "s[i]: " << s[i] << " " << endl;

			// cout << "Temp[i]: " << int(temp[i]) << " ";
			// cout << "s[i]: " << int(s[i]) << " " << endl;

			int x;
			x = int(s[i]);

			x = (int(temp[i]) % int(96)) + (int(s[i]) % int(96)) + 96;

			s[i] = x;
			
			if(x > 122){
				s[i] = (x % 96) + 70;
			}
			// cout << int(s[i]) << endl;
		}

		cout << s << endl;
	}
}
