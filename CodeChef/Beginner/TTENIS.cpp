#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		int win = 0, lose = 0;

		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i] == '0'){
				lose++;
			}
			else{
				win++;
			}
		}

		if(win > lose){
			cout << "WIN" << endl;
		}
		else{
			cout << "LOSE" << endl;
		}
	}
}
