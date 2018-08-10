#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int d = n % 8;

		if(n == 1 || d == 1)
			cout << n + 3 << "LB" << endl;
		else if(n == 2 || d == 2)
        	cout<< n + 3 << "MB\n";
    	else if(n == 3 || d == 3)
	        cout << n + 3 <<"UB\n";
	    else if(n==7||d==7)
	        cout<<n+1<<"SU\n";
	    else if(n==4||d==4)
	        cout<<n-3<<"LB\n";
      	else if(n==5||d==5)
	        cout<<n-3<<"MB\n";
      	else if(n==6||d==6)
	        cout<<n-3<<"UB\n";
      	else if(n==8||d==0)
	        cout<<n-1<<"SL\n";

	}
}
