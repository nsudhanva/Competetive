#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long n;
		cin >> n;
		
		if(n % 4 == 1){
			cout << "ALICE" << endl;
		}
		else{
			cout << "BOB" << endl;
		}
	}
}
