'''#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long n = pow(2, 10);
    unsigned long long i, sum = 0, countt = 0;
    unsigned long long temp = n;

    cout << n << endl;
    while(n != 0){
        n = n / 10;
        countt++;
    }

    for(i = 0; i < countt; i++){
        sum = sum + temp % 10;
        //cout << sum << endl;
        temp = temp / 10;
        //cout << n << endl;
    }

    cout << countt << endl;
    cout << sum;
} '''

print sum(int(x) for x in str(2**1000))



