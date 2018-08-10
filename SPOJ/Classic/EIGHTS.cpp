#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        unsigned long long n;
        cin >> n;

        unsigned long long ans;
        ans = 192 + (n - 1) * 250;
        cout << ans << endl;
    }
}
