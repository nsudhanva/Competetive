#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    const int sum = 1000;
    int a;
    for (a = 1; a <= sum; a++)
    {
        int b;
        for (b = a + 1; b <= sum; b++)
        {
            int c = sum - a - b;
            if ( a*a + b*b == c*c )
               cout << a * b * c ;
        }
    }
    return 0;
}
