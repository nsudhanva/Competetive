#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, k, i;
      	cin >> n >> k;
           
		int arr[n + 1];

		int arr1[n + 1]= {0};

		for(i = 1; i <= n; i++) 
		{
			cin >> arr[i];
			arr1[arr[i]]++;
		}

		int count = 0;

		for(i = 1; i <= n; i++)
	  	{ 
	  		if(arr1[i] >= k && arr[i] != i)
		      count++;	
		}

	   	cout << count << endl;
	}
}
