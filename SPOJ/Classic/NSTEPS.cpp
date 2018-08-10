#include <iostream>
using namespace std;

int main() {
    int n, i, a, b, j, k;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> a >> b;

       if(a != b && a - b != 2){
            cout << "No Number" << endl;
            continue;
       }

        if(a % 2 == 0 && b % 2 == 0){
            cout << (a + b) << endl;
        }
        else{
            cout << (a + b - 1) << endl;
        }

    }

	// your code goes here
	return 0;
}
