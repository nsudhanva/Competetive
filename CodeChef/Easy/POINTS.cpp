#include <bits/stdc++.h>

typedef unsigned long long LL;
typedef unsigned long long ULL;
using namespace std;

bool compare(pair<LL,LL> x, pair<LL,LL> y)
{ 
	if(x.first < y.first)
		return true;
	else if(x.first == y.first)
	{
		if(x.second > y.second)
			return true;
		else
			return false;	
	}
	else
		return false; 
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		LL n, x, y;
		cin >> n;

		std::vector<pair <LL, LL> > v(n);

		for (LL i = 0; i < n; ++i)
		{
			cin >> x >> y;
			v[i] = make_pair(x, y);
		}

		sort(v.begin(), v.end(), compare);

		for (int i = 0; i < n; ++i)
		{
			cout << v[i].first << "," << v[i].second << " ";
		}
		cout << endl;

		double d = 0;

		for (LL i = 0; i < n - 1; ++i)
		{
			d = d + (sqrt((v[i].first - v[i + 1].first) * (v[i].first - v[i + 1].first) + (v[i].second - v[i + 1].second) * (v[i].second - v[i + 1].second)));
		}

		cout << fixed << setprecision(2) << d << endl;

	}
}
