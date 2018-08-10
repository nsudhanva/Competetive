#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[1000], n, i;
    long product = 1;
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    for(i = 0; i < n; i++){
        product = long(product * a[i]) % long(pow(10, 9) + 7);
    }

    cout << product << endl;
}
