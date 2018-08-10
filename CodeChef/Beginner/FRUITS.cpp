#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, m, k;
		cin >> n >> m >> k;

		cout << max(n, m) - min(min(n, m) + k, max(n, m)) << endl;
	}
}	
