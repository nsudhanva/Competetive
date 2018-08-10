#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    long n;
    long m;
    cin >> n >> m;
    long a[n] = {0};

    for(int c_i = 0; c_i < m; c_i++)
    {
        long t;
        cin >> t;
        a[t] = 1;
    }

    long max = 0;
    long i = 0;
    long t = 0;

    while(a[i] == 0)
    {
        t++;
        i++;
    }

    max = t;
    t = 0;

    while(i < n)
    {
        if(a[i] == 0)
        {
            t++;
        }
        else
        {
            long x = (t+1)/2;

            if(max < x)
                max = x;

            t = 0;
        }
        i++;
    }

    if(max < t)
        max = t;

    cout<< max;

    return 0;
}
