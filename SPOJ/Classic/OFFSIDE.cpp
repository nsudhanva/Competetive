#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, d, i, j;

    while(1){
        cin >> a >> d;

        if(a == 0 && d == 0){
            break;
        }

        vector<int> b(a), c(d);

        for(i = 0; i < a; i++){
            cin >> b[i];
        }

        for(j = 0; j < d; j++){
            cin >> c[j];
        }

        sort(b.begin(), b.end());
        sort(c.begin(), c.end());

        if(b[0] < c[1]){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
}
