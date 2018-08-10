#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >>t;

	while(t--){
		string s;
		cin >> s;

		bool flag = true;

		if(s[0] == s[1]){
			flag = false;
		}

		for (int i = 0; i + 2 < s.size(); ++i)
		{
			if(s[i] != s[i + 2]){
				flag = false;
			}
		}

		if(flag){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
