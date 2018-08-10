#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
using namespace std;

int main()
{
	LL t;
	cin >> t;

	while(t--){
		string a, n, m;
		cin >> a >> n >> m;

		string temp = a;

		for (LL i = 0; i < stoll(n) - 1; ++i)
		{
			a = a + temp;
		}

		cout << stoll(a) % stoll(m) << endl;
	}


}
