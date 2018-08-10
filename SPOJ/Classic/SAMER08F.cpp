#include <iostream>
using namespace std;

int main() {

    long n, ans = 0;
    long i;

    while(1){
        cin >> n;
        if(n == 0){
            break;
        }

        ans = 0;
        for(i = 1; i <= n; i++){
            ans = ans + (i * i);
        }

        cout << ans << endl;
    }
	// your code here

	return 0;
}
