#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int t, i, j, k;
    string a;

    cin >> t;

    for(i = 0; i < t; i++){
        cin >> a;

        for(j = 0; j < a.length(); j++){
            if(j % 2 == 0){
                cout << a[j];
            }
        }

        cout << " ";
        for(k = 0; k < a.length(); k++){
            if(k % 2 != 0){
                cout << a[k];
            }
        }

         cout << endl;
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
