#include <bits/stdc++.h>

typedef unsigned long long ULL;
using namespace std;

int main()
{	
	long n, count = 0, max_count = -1;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		ULL	x;
		cin >> x;

		if(x != 0){
			count++;		
		}
		else{
			count = 0;
		}

		if(count > max_count){
			max_count = count;
		}
	}

	cout << max_count << endl;
}	
