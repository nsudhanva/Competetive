#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, m;
		cin >> n >> m;

		std::vector<int> a(m), b, c, d;

		for (int i = 0; i < m; ++i)
		{
			cin >> a[i];
		}

		for (int i = 1; i <= n; ++i)
		{
			if(!(find(a.begin(), a.end(), i) != a.end())){
				b.push_back(i);
			}
		}

		for (int i = 0; i < b.size(); ++i)
		{
			if(i % 2 == 0){
				c.push_back(b[i]);
			}
			else{
				d.push_back(b[i]);
			}
		}

		if(c.size() == 0){
			cout << " " << endl;
		}
		else{
			for (int i = 0; i < c.size(); ++i)
			{
				cout << c[i] << " ";
			}
			cout << endl;
		}
		
		
		if(d.size() == 0){
			cout << " " << endl;
		}
		else{
			for (int i = 0; i < d.size(); ++i)
			{
				cout << d[i] << " ";
			}
			cout << endl;
		}			
	}
}
