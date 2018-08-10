#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1){
        unsigned long long n, i;
        cin >> n;

        if(n == 0){
            break;
        }

        vector<unsigned long long> a(n);
        bool flag;

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
