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
		string s[4];

		for (int i = 0; i < 4; ++i)
		{
			cin >> s[i];
		}

		if(s[0][0] == 'x' && s[0][1] == 'x' && s[0][2] == '.'){
			flag = true;
		}

		if(flag){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}
}