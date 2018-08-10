#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x = 0;
    int y = 1;
    int z;
    int sum = 0;

    do {
        z = x + y;
        x = y;
        y = z;
        if (y % 2 == 0)
            sum += y;
    } while (y <= 4000000);

    cout << sum << endl;
}
