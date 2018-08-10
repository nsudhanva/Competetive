#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		int one = 0, zero = 0;

		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i] == '0'){
				zero++;
			}
			else{
				one++;
			}
		}

		if(zero == 1 || one == 1){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}

	}
}
