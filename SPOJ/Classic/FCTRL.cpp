#include <iostream>
using namespace std;

int main() {
    unsigned long long n, i, x;
    cin >> x;

    for(i = 0; i < x; i++){
        cin >> n;

        unsigned long long count = 0;

        for(unsigned long long i = 5; n/i >= 1; i = i * 5) {
            count = count + n / i;
        }

        cout << count << endl;

    }
	// your code goes here
	return 0;
}
