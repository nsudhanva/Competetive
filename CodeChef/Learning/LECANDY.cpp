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
        ULL n, c, a[10000], sum = 0;
        int i;
        cin >> n >> c;

        for(i = 0; i < n; i++){
            cin >> a[i];
            sum = sum + a[i];
        }

        if(sum <= c){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
