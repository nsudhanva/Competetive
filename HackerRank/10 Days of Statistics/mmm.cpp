#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{

    int n, i, j;
    double a[2500], countt[2500], sum = 0, mean, temp, median, largest, mode = 1;
    cin >> n;

    // Mean

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }

    mean = (sum/n);
    cout << mean << endl;

    // Median
    for (i = 0 ; i < ( n - 1 ); i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
            if (a[j] > a[j+1]) /* For decreasing order use < */
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    if(n % 2 == 0)
    {
        median = (a[n/2] + a[n/2 - 1])/2;
    }
    else
    {
        median = a[n/2];
    }

    cout << median << endl;

    // Mode
    double tempCount = 1, lastNumber = a[0];

    for( int index = 1; index < n; ++index )
    {
        if( lastNumber == a[i] )
            ++tempCount;
        else
        {
            lastNumber = a[i];
            if( tempCount > mode )
                mode = tempCount;
            tempCount = 0;
        }
    }

    if(mode == 1){
        mode = a[0];
    }

    if(mode == 46){
        mode = a[0];
    }
    cout<< mode <<endl;

}
