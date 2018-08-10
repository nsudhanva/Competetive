#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, t, a;
    int i, j, countt = 0;

    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n;
        cin >> k;

        for(j = 0; j < n; j++){
            cin >> a;

            if(a <= 0){
                countt = countt + 1;
            }
        }

        if(countt >= k){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}


