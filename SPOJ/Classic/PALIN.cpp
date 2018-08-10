#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

bool isPalindrome(LL n)
{
	LL rev = 0, temp = n;

    while(n != 0){
        rev = rev * 10;
        rev = rev + n % 10;
        n = n / 10;
    }

    if(temp == rev){
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

	for (int i = 0; i < t; ++i)
	{
		LL n;
		cin >> n;

		n++;
		
		while(!isPalindrome(n)){
			n++;
		}

		cout << n << endl;

	}
}
