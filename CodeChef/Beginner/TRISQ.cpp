#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long B, t1, t2;
		cin >> B;

		t2 = B / 2;
		t1 = t2 * t2;
		t1 = t1 - t2;
		t1 = t1 / 2;

		cout << t1 << endl;

	}
}
