#include <iostream>
using namespace std;

int main()
{
	int n, largest, sum = 0, i;

	cin >> n;

    while(n != -1){
        sum = 0;
        int a[n];
        for(i = 0; i < n; i++){
            cin >> a[i];
            sum = sum + a[i];
        }

        if(sum % n != 0){
            cout << "-1" << endl;
        }
        else{
            int avg = sum / n, c = 0;

            for(int i = 0; i < n; i++){
                if(a[i] > avg){
                    c = c + (a[i] - avg);
                }
            }
            cout << c << endl;
        }
        cin >> n;
    }
	return 0;
}
