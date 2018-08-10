#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, k, t, d, temp;
		cin >> n >> k;

		int total_cost = 0;		

		for (int i = 0; i < n; ++i)
		{
			cin >> t >> d;
			if(k <= 0)
				total_cost += (t * d);			 				
			else{	
				temp = t;

				for (int i = 0; i < k; ++i)
				{
					t--;

					if(t == 0){
						break;
					}
				}	

				total_cost += (t * d);	
				k = k - temp;			
			}

		}

		cout << total_cost << endl;
			
	}
}
