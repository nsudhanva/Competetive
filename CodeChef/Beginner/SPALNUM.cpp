#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(unsigned long long n)
{
	unsigned long long rev = 0, temp = n;

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

unsigned long long sum_palindrome(unsigned long long a, unsigned long long b)
{
	unsigned long long i, sum = 0;

	for (i = a; i <= b; ++i)
	{
		if(isPalindrome(i)){
			sum = sum + i;
		}
	}

	return sum;
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long a, b;
		cin >> a >> b;

		cout << sum_palindrome(a, b) << endl;
	}
}
