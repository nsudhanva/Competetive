#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

bool isPrime(int x)
{
    int i, a;
    a = sqrt(x);

    for(i = 2; i <= a; i++)
        if(x % i == 0)
            return(0);
        return(1);
}


int main()
{
    int t, i, j, n, count;
    cin >> t;

    vector<int> a;

    for(j = 1; j < 3000; j++){
        count = 0;
//        cout << j << ": ";
        for(i = 2; i < 3000; i++){
            if((j % i) == 0 && isPrime(i)){
//                cout << i << " ";
                count++;
            }
        }
        if(count >= 3){
//         cout << j << endl;
           a.push_back(j);
        }
//        cout << endl;
    }

    for(i = 0; i < t; i++){
        cin >> n;
        cout << a[n - 1] << endl;
    }
}
