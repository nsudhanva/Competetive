#include <cmath>
#include <cstdio>
#include <vector>
#include <array>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i, n, k, q, m, a[100000], b[100000];

    cin >> n;
    cin >> k;
    cin >> q;

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    k = k % n;

    for(i = 0; i < n; i++){
        int temp = (i + n - k) % n;
        a[i] = b[temp];
    }

    for(i = 0; i < q; i ++){
        cin >> m;
        cout << a[m] << endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
