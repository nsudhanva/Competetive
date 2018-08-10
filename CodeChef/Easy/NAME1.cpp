#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string a, b;
		cin >> a >> b;

		int n;
		cin >> n;

		map<char, int> m;

		string x = a + b;
		remove(x.begin(), x.end(), ' ');

		bool flag;

		for (int i = 0; i < n; ++i)
		{
			flag = true;
			int count = 0;

			string s;
			cin >> s;

			for (int i = 0; i < a.size(); ++i)
			{
				m[a[i]]++;
			}

			for (int i = 0; i < b.size(); ++i)
			{
				m[b[i]]++;
			}

			for (int i = 0; i < x.size(); ++i)
			{
				m[x[i]]--;

				if(m[x[i]] < 0){
					flag = false;
					break;
				}
			}
		}

		if(flag){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}
}
