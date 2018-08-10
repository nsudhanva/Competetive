#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
	string temp = s;
	reverse(s.begin(), s.end());

	if(temp == s){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		string a, b;
		cin >> a >> b;

		bool flag = false;

		for (int i = 0; i < a.length(); ++i)
		{
			for (int j = 0; j < b.length(); ++j)
			{
				string x, y;
				x.push_back(a[i]);
				y.push_back(b[j]);
				if(isPalindrome(x + y)){
					flag = true;
				}				
			}
		}

		if(flag){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
 		}
	}
}
