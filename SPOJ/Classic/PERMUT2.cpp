#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n, i;
    unsigned long long a[100001];
    bool flag;

    while(cin >> n){
        if(n == 0){
            return 0;
        }

        for(i = 1; i <= n; i++){
            cin >> a[i];
        }

        flag = 1;

        for(i = 1; i <= n; i++){
            if(a[a[i]] != i){
                flag = 0;
                break;
            }
        }

        if(flag){
            cout << "ambiguous" << endl;
        }
        else {
            cout << "not ambiguous" << endl;
        }
    }
}
