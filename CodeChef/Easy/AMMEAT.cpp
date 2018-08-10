#include <bits/stdc++.h>

typedef unsigned long long ULL;
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, m;
		ULL sum = 0, count = 0, flag = 0;
		cin >> n >> m;

		std::vector<ULL> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		sort(a.begin(),a.end(), greater<int>());

		for (int i = 0; i < n; ++i)
		{
			sum = sum + a[i];
			count++;
			if(sum >= m){
				flag = 1;				
				break;
			}
		}

		if(flag){
			cout << count << endl;
		}
		else{
			cout << "-1" << endl;
		}
	}
}
