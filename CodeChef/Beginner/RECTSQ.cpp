#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int a, b;
		cin >> a >> b;

		if(a == b){
			cout << "1" << endl;
		}
		else{
			int area = a * b;
			int s = std::__gcd(a, b);
			cout << area / (s * s) << endl;
		}
	}
}
