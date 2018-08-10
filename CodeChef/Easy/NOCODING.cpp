#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		int count = 2;

		for (int i = 1; i < s.length(); ++i)
		{
			int c = s[i] - s[i - 1];

			if(c < 0){
				c = (c + 26) % 26;
			}

			count = count + c + 1;
		}

		if(count <= 11 * s.length()){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
