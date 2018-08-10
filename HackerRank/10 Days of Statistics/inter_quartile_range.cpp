#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n ,x[100], f[1000], s[1000],j, i, k, fsum = 0, countt = 0;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for(i = 0; i < n; i++)
    {
        cin >> f[i];
        fsum = fsum + f[i];
    }

    for(i = 0; i < fsum; i++)
    {
        cout << s[i] << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

