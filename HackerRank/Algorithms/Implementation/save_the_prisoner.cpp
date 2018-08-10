#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long t, n, m, s, i, j;

    cin >> t;

    for(i = 1; i < t + 1; i++){
        cin >> n >> m >> s;

        long result = (s + m - 1) % n;

        if(result == 0){
            cout << n << endl;
        }
        else {
            cout << result << endl;
        }
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
