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
		LL n, q;
		cin >> n >> q;

		string s;
		cin >> s;

		std::vector<int> l(q);
		std::vector<int> r(q);

		for (int i = 0; i < q; ++i)
		{
			cin >> l[i] >> r[i];
		}

		reverse(l.begin(), l.end());
		reverse(r.begin(), r.end());

		for (int i = 0; i < q; ++i)
		{
			for(int j = l[i] - 1; j <= r[i] - 1; j++){
				if(s[j] == 'a'){
					s[j] = 'z';
				}
				else{
					s[j]--;
				}
			}
		}

		cout << s << endl;
	}
}
