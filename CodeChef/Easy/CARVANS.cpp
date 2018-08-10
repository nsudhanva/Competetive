#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int max, x = 1;
		cin >> max;

		while(--n){
			int temp;
			cin >> temp;

			if(temp <= max){
				max = temp;
				x++;
			}
		}

		cout << x << endl;
	}
}
