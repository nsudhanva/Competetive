#include <iostream>
#include <vector>
using namespace std;

int main()
{
    unsigned long long i, j, n;
    cin >> n;
    unsigned long long sum1, sum2, sum3;
    sum1 = sum2 = sum3 = 0;

    vector<unsigned long long> c(n);

    for(i = 0; i < n; i++){
        cin >> c[i];

        if(i % 3 == 1){
            sum1 = sum1 + c[i];
        }
        if(i % 3 == 2){
            sum2 = sum2 + c[i];
        }
        if(i % 3 == 0){
            sum3 = sum3 + c[i];
        }
    }

    cout << sum3 << " " << sum1 << " " << sum2 << endl;

    return 0;
}
