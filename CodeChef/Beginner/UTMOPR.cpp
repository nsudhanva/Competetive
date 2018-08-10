#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long n, k;
		cin >> n >> k;

		vector<unsigned long long> a(n);

		unsigned long long s = 0;
		for (unsigned long long i = 0; i < n; ++i)
		{
			cin >> a[i];
			s += a[i];
		}

		if(s % 2 == 0){
			if(k == 1){
				cout << "odd" << endl;
			}
			else{
				cout << "even" << endl;
			}
		}
		else{
			cout << "even" << endl;
		}
		
	}
}
