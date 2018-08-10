#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long n, k;
		cin >> n >> k;

		if(k == 0){
			cout << k << " " << n << endl;
		}
		else{
			cout << n / k << " " << n % k << endl;
		}
		
	}
}
