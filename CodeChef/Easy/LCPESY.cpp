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

		LL v[152] = {0};
		LL count = 0;

		for (int i = 0; i < a.size(); ++i)
		{
			v[a[i]]++;
		}

		for (int i = 0; i < b.size(); ++i)
		{
			if(v[b[i]] > 0){
				count++;
				v[b[i]]--;
			}
		}		

		cout << count << endl;
	}
}
