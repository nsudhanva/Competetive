#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long n, i, t, count, x;
	cin >> t;

	while(t--){		
		cin >> n;

		count = 0;
		while(n--){
			cin >> x;
			count ^= n;
		}	

		cout << count << endl;

	}
}
