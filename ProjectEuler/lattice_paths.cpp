#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int gridSize = 20;
    unsigned long long paths = 1, i;

    for (i = 0; i < gridSize; i++) {
        paths =  paths * ((2 * gridSize) - i);
        //cout << paths << endl;
        paths = paths / (i + 1);
       // cout << paths << endl;
    }

    cout << paths << endl;
}
