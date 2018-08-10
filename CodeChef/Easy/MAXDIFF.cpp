#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		long n, k, sum_dad = 0, sum_son = 0;
		cin >> n >> k;

		std::vector<long> v(n);

		for (long i = 0; i < n; ++i)
		{
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		k = (n - k < k) ? (n - k) : k;

	 	for(int i = 0; i < n; ++i)
  	 	{ 
  	 		if(i < k)
	     		sum_son += v[i];
	    	else
	     		sum_dad += v[i];	  	
	  	}

		// cout << sum_dad << endl;
		// cout << sum_son << endl;

		cout << abs(sum_dad - sum_son) << endl;
	}
}
