#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

bool isPalindrome(string s)
{
	string temp = s;

	reverse(s.begin(), s.end());

	if(temp == s){
		return true;
	}

	return false;
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		if(isPalindrome(s)){
			cout << "Palindrome" << endl;
		}
		else{
			LL product = 1;

			for (int i = 0; i < s.size(); ++i)
			{
				product = product * (int(s[i]) - 96);
			}

			cout << product << endl;
		}
	}
}
