#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n, x, i, j, k;
    cin >> n;

    for(i = 0; i < n ;i++){
        unsigned long long x;
        cin >> x;

        vector< vector<unsigned long long> > a(x, vector<unsigned long long>(x, 0));
        for(j = 0; j < x; j++){
            for(k = 0; k <= j; k++){
                cin >> a[j][k];
            }
        }

//        for(int j = 0; j < x; j++){
//            for(int k = 0; k < x; k++){
//                cout << a[j][k] << " ";
//            }
//            cout << endl;
//        }

        for(j = x - 1; j > 0; j--){
            for(k = 0; k < j; k++){
                if(a[j][k] > a[j][k + 1]){
                    a[j - 1][k] = a[j - 1][k] + a[j][k];
//                    cout << a[j - 1][k] << endl;
                }
                else{
                    a[j - 1][k] = a[j - 1][k] + a[j][k + 1];
//                    cout << a[j - 1][k] << endl;
                }
            }
        }

        cout << a[0][0] << endl;
    }

}
