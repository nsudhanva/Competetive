#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long a, b, p1, p2, count = 0;
		
		cin >> a >> b;

		p1 = sqrt(a);
		p2 = sqrt(b);

		if(p1 * p1 == a){
			cout << p2 - p1 + 1 << endl;
		}
		else{
			cout << p2 - p1 << endl;
		}
	}
	
}
