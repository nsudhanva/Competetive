#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int main()
{
    int t, a, b, i, j, k;
    cin >> t;

    for(i = 0; i < t; i++){
        cin >> a >> b;
        vector<int> x(a), y(b);

        for(j = 0; j < a; j++){
            cin >> x[j];
        }

        for(k = 0; k < b; k++){
            cin >> y[k];
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        if(x[a - 1] >= y[b - 1]){
            cout << "Godzilla" << endl;
        }
        else{
            cout << "MechaGodzilla" << endl;
        }
    }
}
