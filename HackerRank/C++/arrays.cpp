#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i;
    cin >> n;

    int a[10000];

    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    for(i = n - 1; i >= 0; i--){
        cout << a[i] << " ";
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
