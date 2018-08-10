#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		int temp;
		cin >> n;

		for (int i = 0; i < 2 * n; i++){
			cin >> temp;
		}

		temp = 1;

		for (int i = 2; i <= n; i++){
			temp = (temp << 0 ^ i << 0);
		}
		cout << temp << endl;
	}
}
