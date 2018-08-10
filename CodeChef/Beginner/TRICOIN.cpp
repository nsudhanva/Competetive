#include <bits/stdc++.h>

using namespace std;

unsigned long long sum(unsigned long long h) {
    return (h * (h+1) / 2);
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long n;
		cin >> n;

		unsigned long long h = 1;

	    while(sum(h) <= n) {
	        h++;
	    }
	    cout << h - 1 << endl;

	}
}
