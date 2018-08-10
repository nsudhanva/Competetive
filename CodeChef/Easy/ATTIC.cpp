#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		long long l = 1, ans = 0, cur = 0;

		for (long long i = 0; i < s.size(); ++i)
		{		
			cur++;

			if(s[i] == '#'){
				if(cur > l){
					l = cur;
					ans++;
				}
				cur = 0;
			}

		}

		cout << ans << endl;
	}
}
