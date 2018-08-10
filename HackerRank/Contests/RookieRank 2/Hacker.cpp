#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		string x = "hackerrank";

		int j = 0;

		for (int i = 0; i < s.size() && j < x.size(); ++i)
		{
			if(x[j] == s[i]){
				j++;
			}
		}

		if(j == x.size()){
			cout << "YES" << endl; 
		}
		else{
			cout << "NO" << endl;
		}	
	}
}
