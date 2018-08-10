#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {

    long x[10000], n, i;
    double mean, sum, distance = 0, SD;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x[i];
        sum = sum + x[i];
    }

     mean = (sum / n);

     for(i = 0; i < n; i++){
        distance = distance + (x[i] - mean) * (x[i] - mean);
     }

    SD = sqrt(distance / n);

    cout << fixed << setprecision(1) << SD;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
