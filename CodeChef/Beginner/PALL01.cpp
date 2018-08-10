#include <bits/stdc++.h>

using namespace std;

int reverse(int n)
{
	int rev = 0;

    while(n != 0){
        rev = rev * 10;
        rev = rev + n % 10;
        n = n / 10;
    }

    return rev;
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n, x;
		cin >> n;

		x = reverse(n);

		//cout << x << endl;

		if(x == n){
			cout << "wins" << endl;
		}
		else{
			cout << "losses" << endl;
		}
	}
}
