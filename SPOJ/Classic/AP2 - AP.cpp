#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int main()
{
    unsigned long long t, i;
    cin >> t;

    for(i = 0; i < t; i++){
        unsigned long long a, a3, an3, sum, n, d;

        cin >> a3 >> an3 >> sum;

        n = (2 * sum)/(a3 + an3);
        cout << n << endl;

        d = (an3 - a3)/(n - 5);
        a = a3 - (2 * d);

        for(int j = 0; j < n; j++){
            cout << a + (j * d) << " ";
        }
        cout << endl;
    }
}
