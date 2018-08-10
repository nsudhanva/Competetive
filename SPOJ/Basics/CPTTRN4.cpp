// Prints a frame * frame weird

/*

1
1 1
1 1
1 1

*/
#include <iostream>
using namespace std;

int main() {

	int n, a[100], b[100], c[100], d[100], i, j, k;

	cin >> n;

	for(i = 0; i < n; i++){
        cin >> a[i];
        cin >> b[i];
        cin >> c[i];
        cin >> d[i];
	}

    for(k = 0; k < n; k++){
        for(i = 0; i < (((c[k] + 1) * a[k]) + 1); i++){
            for(j = 0; j < (((d[k] + 1) * b[k]) + 1); j++){
                if (j % (d[k] + 1) == 0 || i % (c[k] + 1) == 0){
					cout << "*";
				}
				else {
					cout << ".";
				}
            }
            cout << endl;
        }
        cout << endl;
    }

	return 0;
}

