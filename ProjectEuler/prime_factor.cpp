#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int x);

int main()
{
    long long n, i;
    cin >> n;

    for(i = 0; i < n; i++){
        if(isPrime(i)){
            if(n % i == 0){
                cout << i << endl;
            }
        }
    }

    return 0;
}

bool isPrime(int x)
{
    int i;
    if (x < 2)
        return false;
    for(int i = 2; i <= sqrt(x); i++)
    {
        if ((x % i) == 0)
            return false;
    }
    return true;
}

