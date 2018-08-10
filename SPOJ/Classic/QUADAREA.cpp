#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i;
    cin >> t;
    long double a, b, c, d, s, k;

    for(i = 0; i < t; i++){
        cin >> a >> b >> c >> d;

        s = (a + b + c + d)/2;
        k = sqrt((s - a) * (s - b) * (s - c) * (s - d));
        cout << fixed << setprecision(2) << k << endl;
    }

}
