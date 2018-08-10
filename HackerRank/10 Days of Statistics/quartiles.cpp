#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double findMedian(int x[], int n);

int main()
{
    int n, i, x[100], temp, countt = 0, n1, n2;
    double median, median1, median2;
    cin >> n;

    if(n % 2 == 0)
    {
        n1 = n/2 + 1;
        n2 = n/2 + 1;
    }
    else
    {
        n1 = n/2;
        n2 = n/2 + 1;
    }

    int L[n1 - 1], R[n1 - 1];

    for(i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    //cout << findMedian(x, n) << endl;
    median = findMedian(x, n);

    for(i = 0; i < n1; i++)
    {
        L[i] = x[i];
        median1 = findMedian(L, n1);
    }

    for(i = 0; i < n; i++)
    {
        R[i] = x[n2 + i];
        median2 = findMedian(R, n1);
    }

    cout << median1 << endl;
    cout << median << endl;
    cout << median2 << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

double findMedian(int x[], int n)
{
    int i, j;
    double temp, median;

    // Median
    for (i = 0 ; i < ( n - 1 ); i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
            if (x[j] > x[j+1]) /* For decreasing order use < */
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }

    if(n % 2 == 0)
    {
        median = (x[n/2] + x[n/2 - 1])/2;
    }
    else
    {
        median = x[n/2];
    }

    return median;
}




