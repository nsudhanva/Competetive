#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	LL t;
	cin >> t;

	while(t--){
		LL n;
		cin >> n;

		LL x = 0;

		bool flag = false;

		for (LL i = 0; i < n; ++i)
		{
			LL a;
			cin >> a;

			x = __gcd(x, a);			
		}

	 	for(LL i = 2; i <= floor(sqrt(x)); i++)
        {
            if(x % i == 0)
            {
                x = i;
               	break;
            }
        }

		if(x == 1){
			cout << "-1" << endl;
		}
		else{
			cout << x << endl;
		}


	}
}
