#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<char, int> m;
	int n;

	for (char i = 'a'; i <= 'z'; ++i)
	{
		cin >> n;
		m[i] = n;
	}

	// for(auto const& ele : m){
	// 	cout << "Key: " << ele.first << " ";
	// 	cout << "Value: " << ele.second << endl;
	// }

	string s;
	cin >> s;

	int max = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		if(m[s[i]] > max)
			max = m[s[i]];
	}

	cout << max * s.size() << endl;
}
