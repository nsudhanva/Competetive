#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double r, ans;
    int t, i;

    cin >> t;

    for(i = 0; i < t; i++){
        cin >> r;

        ans = 0.25 + 4 * r * r;
        cout << fixed << "Case " << i + 1 << ": " << setprecision(2) << ans;
    }
}
