// Prints a chess board

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
        for(i = 2; i < a[k] + 2; i++){
            for(j = 2; j < b[k] + 2; j++){
                if((i + j) % 2 == 0){
                    cout << "*";
                }else{
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

	return 0;
}

