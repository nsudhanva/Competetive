#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i] == '>'){				
				s[i] = '<';
				continue;
			}
			if(s[i] == '<'){
				s[i] = '>';
				continue;
			}
		}

		// cout << s << endl;

		int count = 0;
		int pos = s.find("><", 0);

		while(pos != string::npos){
			count++;
			pos = s.find("><", pos + 1);
		}

		cout << count << endl;

	}
}
                                                                                               