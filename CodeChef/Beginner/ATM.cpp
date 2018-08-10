#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    if(int(x) % 5 == 0 && x <= y - 0.5){
        y = y - x - 0.50;
    }

    cout << fixed << setprecision(2) << y;
}
