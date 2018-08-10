#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    unsigned long long n, sum, fsum;
    cin >> t;

    int i, j;
    for(i = 0; i < t; i++){

//        fsum = 0;
//        sum = 2;
//        cin >> n;
//
//        for(j = 0; j < n; j++){
//            //cout << sum << endl;
//            fsum = fsum + sum;
//            sum = sum + 3;
//        }
//        cout << fsum % 1000007 << endl;

        cin >> n;

        sum = (2 * n * (n + 1) / 2) + (n * (n - 1)/2);

        cout << sum % 1000007 << endl;
     }
}
