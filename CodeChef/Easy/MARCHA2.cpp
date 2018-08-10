#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		long k;
		cin >> k;

		int flag = 0;
		int b = 1;
		long a;

		for (int i = 0; i < k; ++i)
		{
			cin >> a;

			if(a <= b){
				flag++;
				b = (b - a) * 2;
			}
		}

		if(b == 0 && flag == k){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl; 
		}


	}

}
