#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long x);

int main()
{
    long i, countt = 0;
    for(i = 2; i <= 1000000; i++){
        if(isPrime(i)){
            countt++;
        }

        cout << countt << endl;

        if(countt == 10001){
            cout << i << endl;
        }
    }
}

bool isPrime(long x)
{
    long i;
    if (x < 2)
        return false;
    for(long i = 2; i <= sqrt(x); i++)
    {
        if ((x % i) == 0)
            return false;
    }
    return true;
}
