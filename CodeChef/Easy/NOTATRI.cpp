#include <bits/stdc++.h>

using namespace std;

int main()
{
	while(1){
		int n, count = 0, j, k;
		cin >> n;

		if(n == 0){
			break;
		}

		std::vector<unsigned long long> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		sort(a.begin(), a.end());

	    for(int i = n - 1; i >= 2; i--){
	        j = i - 1;
	        k = 0;

	        while(k < j){
	            if(a[i] > a[j] + a[k]){
	                count += j - k;
	                k++;
	            }
	            else
	                j--;
        	}
        }

	   cout << count << endl;
	}
}

