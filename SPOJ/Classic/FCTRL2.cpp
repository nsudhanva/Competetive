#include <iostream>
using namespace std;

unsigned long long fact(unsigned long long n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return fact(n - 1) * n;
}

int main() {
    unsigned long long n, i, a[1000];

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    for(i = 0; i < n; i++){
         cout << fact(a[i]) << endl;
    }

	// your code goes here
	return 0;
}
