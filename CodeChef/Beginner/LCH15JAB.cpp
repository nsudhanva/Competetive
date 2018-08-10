#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		bool flag = false;
		map<char, int> x;

		for (int i = 0; i < s.length(); ++i)	
		{
			x[s[i]]++;
		}

		for (int i = 0; i < s.length(); ++i)
		{
			if(x[s[i]] == s.size() - x[s[i]]){
				flag = true;
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
