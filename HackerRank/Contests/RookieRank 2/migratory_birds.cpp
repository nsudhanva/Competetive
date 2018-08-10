#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int n;
	cin >> n;

	map<int, int> m;
	std::vector<int> a(n);
	
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		m[a[i]]++;
	}

	int max = 0, num;

	for(auto x : m){
		if(x.second > max){
			max = x.second;
			num = x.first;
		}

	}

	cout << num << endl;
}
