#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n, i, x = 0;
    cin >> n;

    for(i = 1; i <= sqrt(n); i++){
        x = x + (n/i - i + 1);
    }

    cout << x << endl;
}
