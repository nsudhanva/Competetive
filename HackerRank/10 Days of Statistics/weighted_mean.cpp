#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main()
{

    int n, i;
    float x[100], w[100], wm = 0, wsum = 0;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for(i = 0; i < n; i++)
    {
        cin >> w[i];
        wsum = wsum + w[i];
    }

    for(i = 0; i < n; i++)
    {
        wm = wm + (x[i] * w[i])/wsum;
    }

    cout << fixed << setprecision(1) << wm << endl;


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

