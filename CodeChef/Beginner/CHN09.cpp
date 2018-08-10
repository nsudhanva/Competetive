#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		int acount = 0, bcount = 0, count = 0;

		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i] == 'a'){
				acount++;
			}
			else{
				bcount++;
			}
		}

		if(acount < bcount){
			for (int i = 0; i < s.length(); ++i)
			{
				if(s[i] == 'a'){
					s[i] == 'b';
					count++;
				}
			}
		}
		else if(acount >= bcount){
			for (int i = 0; i < s.length(); ++i)
			{
				if(s[i] == 'b'){
					s[i] == 'a';
					count++;
				}
			}
		}

		cout << count << endl;
	}
}
