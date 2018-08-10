#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i, people = 5, sum = 0;
    cin >> n;

    for(i = 0; i < n; i++){
        sum = sum + (people/2);
       people = (people/2) * 3;
       //cout << sum << endl;
    }

    cout << sum << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
