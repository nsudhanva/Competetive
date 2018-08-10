#include <bits/stdc++.h>

using namespace std;

bool isEven(unsigned long long n)
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
	int t;
	cin >> t;

	while(t--){
		unsigned long long n, b, m, minutes = 0, temp;
		cin >> n >> b >> m;

		while(n > 0){
			minutes = minutes + b;

			if(isEven(n)){
				temp = n / 2;
			}
			else{
				temp = (n + 1) / 2;
			}
			
			minutes = minutes + (temp * m);
			m = m * 2;
			n = n - temp;
		}

		minutes = minutes - b;
		cout << minutes << endl;
	}
}
