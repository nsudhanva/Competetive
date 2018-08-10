#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, i, bc;
    cin >> n >> k;

    int c[n];

    for(i = 0; i < n; i++){
        cin >> c[i];
    }

    cin >> bc;

    int sum = 0, ba;

    for(i = 0; i < n; i++){
        if(i == k){
            continue;
        }
        sum = sum + c[i];
    }

    ba = sum / 2;
    //cout << "BA: " <<  ba << endl;
    //cout << "BC: " <<  bc << endl;

    if(ba < bc){
        cout << bc - ba << endl;
    }
    else
        cout << "Bon Appetit";



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
