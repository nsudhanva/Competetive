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
		LL C;
		cin >> C;

		LL I;
		cin >> I;

		std::vector<LL> arr(I);
		map<int, int> m;

		for (int i = 0; i < I; ++i)
		{
			cin >> arr[i];
			m[arr[i]] = i + 1;
		}

		sort(arr.begin(), arr.end());

		int i = 0;
	    int j = I - 1;

	    while( i < j){

	        while((arr[i] + arr[j]) <= C && i < j)
	        {
	            if((arr[i] + arr[j]) == C)
	            	if(i == j)
	                	cout << "Case #" << t + 1 << ": " << m[arr[j]] << " " << m[arr[i]] << endl;
	                else
	                	cout << "Case #" << t + 1 << ": " << m[arr[j]] << " " << m[arr[i]] << endl;
	            i++;
	        }

	        j--;

	        while((arr[i] + arr[j]) >= C && i < j)
	        {
	            if((arr[i] + arr[j]) == C)
          			cout << "Case #" << t + 1 << ": " << m[arr[j]] << " " << m[arr[i]] << endl;
	            j--;
	        }
	    }

	}
}
