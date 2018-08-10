#include <bits/stdc++.h>

using namespace std;

bool isPresent(int n, vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		if(n == v[i]){
			return true;
		}
	}
	return false;
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, m, k;
		cin >> n >> m >> k;

		set<int> a, b; 
		vector<int> c, d, e, f;		

		for (int i = 0; i < m; ++i)
		{
			int x;
			cin >> x;
			a.insert(x);		
		}

		for (int i = 1; i <= n; ++i)
		{
			f.push_back(i);	
		}

		for (int i = 0; i < k; ++i)
		{
			int y;
			cin >> y;
			b.insert(y);
		}

		set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));
		set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(d));

		// for (int i = 0; i < c.size(); ++i)
		// {
		// 	cout << c[i] << " ";		
		// }

		// cout << endl;

		// for (int i = 0; i < d.size(); ++i)
		// {
		// 	cout << d[i] << " ";	
		// }

		// cout << endl;

		for (int i = 1; i <= n; ++i)
		{
			if(!isPresent(i, d)){
				e.push_back(i);
			}
		}

		// cout << endl;

		// for (int i = 0; i < e.size(); ++i)
		// {
		// 	cout << e[i] << " ";		
		// }

		// cout << endl;

		cout << c.size() << " " << e.size() << endl;
	}		
}
