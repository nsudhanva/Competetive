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
		bool isAllEven = true;

		string x = "", y = "";
		map<char, int> m;

		for (int i = 0; i < s.size() / 2; ++i)
		{
			m[s[i]]++;
			x = x + s[i];
		}

		for (int i = (s.size() + 1) / 2; i < s.size(); ++i)
		{
			m[s[i]]++;
			y = y + s[i];
		}

		for(auto i : m){
			if(i.second % 2 != 0){
				isAllEven = false;
			}
		}

	    // cout << x << " " << y << endl;

		if(x == y){
			flag = true;
		}

		if(isAllEven){
			flag = true;
		}

		string temp = s;
		reverse(s.begin(), s.end());

		if(temp == s){
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
