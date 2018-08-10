#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		bool a = false;
		bool b = false;
		bool c = false;

		if(360 % n == 0){
			a = true;
		}

		if(n <= 360){
			b = true;
		}

		if(n * (n + 1)/ 2 <= 360){
			c = true;
		}

		if(a){
			cout << "y";
		}
		else{
			cout << "n";
		}

		cout << " ";

		if(b){
			cout << "y";
		}
		else{
			cout << "n";
		}

		cout << " ";

		if(c){
			cout << "y";
		}
		else{
			cout << "n";
		}

		cout << endl;

	}
}
