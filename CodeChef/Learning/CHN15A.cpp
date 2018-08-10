#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, k, a[10000], i, count = 0;
        cin >> n >> k;

        for(i = 0; i < n; i++){
            cin >> a[i];
            a[i] = a[i] + k;

            if(a[i] % 7 == 0){
                count++;
            }
        }

        cout << count << endl;
    }
}
