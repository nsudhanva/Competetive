#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

bool isEven(LL n)
{
	if(n % 2 == 0){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	LL t;
	cin >> t;

	while(t--){
		LL n;
		cin >> n;

		string s;
		cin >> s;

		LL count0 = 0, count1 = 0;
		for (LL i = 0; i < n; ++i)
		{
			if(s[i] == '0'){
				count0++;
			}
			else{
				count1++;
			}
		}

		if(isEven(count1) || isEven(count0)){
			cout << abs(count0 - count1) - 1 << endl;
		}
		else{
			cout << abs(count0 - count1) << endl;
		}		
	}
}
