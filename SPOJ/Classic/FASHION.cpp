#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t, i, x, y, n, j, sum;
    cin >> t;

    for(i = 0; i < t; i++){
        sum = 0;
        cin >> n;
        int a[n], b[n];

        for(j = 0; j < n; j++){
            cin >> a[j];
        }

        for(j = 0; j < n; j++){
            cin >> b[j];
        }

        sort(a, a + n);
        sort(b, b + n);

        for(j = 0; j < n; j++){
            sum = sum + a[j] * b[j];
        }

        cout << sum << endl;
    }
}
