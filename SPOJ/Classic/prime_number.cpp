#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

bool isPrime(int x);

int main()
{

    long long t, i, j, k, x, y;
    vector<long long> m, n;
    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> x;
        cin >> y;
        m.push_back(x);
        n.push_back(y);
    }

    for(i = 0; i < t; i++)
    {
        for(j = m[i]; j <= n[i]; j++)
        {
            if(isPrime(j))
            {
                cout << j << endl;
            }
        }
        cout << endl;
    }
    // your code goes here
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
