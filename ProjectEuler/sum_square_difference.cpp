#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 100, sum1 = 0, sum2 = 0, i;

    for(i = 1; i <= n; i++){
        sum1 = sum1 + i * i;
    }

    for(i = 1; i <= n; i++){
        sum2 = sum2 + i;
    }

    cout << sum2 * sum2 - sum1;

}

