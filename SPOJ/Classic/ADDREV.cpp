#include <iostream>
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


int main() {

    int n, i, a, b;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> a >> b;

        cout << reverse(reverse(a) + reverse(b)) << endl;
    }


	// your code goes here
	return 0;
}
