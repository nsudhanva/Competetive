#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long n, v = 3, i;
    cin >> n;

//    unsigned long long temp = v;
//    unsigned long long temp2;
// =========================================================
//    BRUTE FORCE SOLUTION - FAILS ON LARGER INPUT O(n)

//    for(i = 1; i < n + 1; i++){
//        //cout << "Time: " << i;
//        //cout << " Value: " << v << endl;
//        v--;
//
//        if(v == 0){
//            v = temp * 2;
//            temp2 = v;
//            temp = temp2;
//        }
//    }
// ==========================================================
//    LOGARITHMIC SOLUTION - O(log(n))

    while (n > v) {
        n = n - v;
        v *= 2;
    }

    cout << v - n + 1 << endl;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
