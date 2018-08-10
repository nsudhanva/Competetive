#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned long long x)
{
    unsigned long long i;
    if (x < 2)
        return false;
    for(unsigned long long i = 2; i <= sqrt(x); i++)
    {
        if ((x % i) == 0)
            return false;
    }
    return true;
}

int main()
{
    unsigned long long sum = 0, i;
    for(i = 0; i < 1999998; i++){
        if(isPrime(i)){
            //cout << "Num: " << i << endl;
            sum = sum + i;
        }
        //cout << "Sum: " << sum << endl;
    }

    cout << sum;
}

