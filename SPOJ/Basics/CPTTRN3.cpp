// Prints a frame * frame

#include <iostream>
using namespace std;

int main() {

	int n, a[100], b[100], i, j, k;

	cin >> n;

	for(i = 0; i < n; i++){
        cin >> a[i];
        cin >> b[i];
	}

    for(k = 0; k < n; k++){
        for(i = 0; i < (a[k] * 3) + 1; i++){
            for(j = 0; j < (b[k] * 3) + 1; j++){
                if(i % 3 == 0 || j % 3 == 0){
                    cout << "*";
                }
                else{
                   cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

	return 0;
}

