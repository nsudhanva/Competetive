#include <iostream>
#include <string>
using namespace std;

int main() {

	int n, i, j;
	cin >> n;
	string z[n];
    cin.ignore();

	for(i = 0; i < n; i++){
        getline(cin, z[i]);
	}

	for(i = 0; i < n; i++){
        for(j = 0; j < (z[i].size()/2) ; j++){
            if(j % 2 == 0){
                cout << z[i][j];
            }
        }
        cout << endl;
	}
	// your code here

	return 0;
}
