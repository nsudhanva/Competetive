#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1, x2, v1, v2;

    cin >> x1;
    cin >> v1;

    cin >> x2;
    cin >> v2;

    if((x2 - x1) * (v2 - v1) < 0 && (x2 - x1) % (v2 - v1) == 0){
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
