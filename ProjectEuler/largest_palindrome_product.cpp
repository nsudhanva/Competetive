#include <iostream>
#include <cmath>

using namespace std;

bool palindrome(long n);

int main()
{
    long a = 100, b = 999, i, j, x, largest = 0;

    for(i = a; i <= b; i++){
        for(j = a; j <= b; j++){
            x = i * j;
            //cout << "Before: " << x << endl;
            if(palindrome(x)){
                if(x > largest){
                    largest = x;
                }
                cout << (x) << endl;
            }
        }

    }

    cout << "Largest :"<<largest << endl;

    return 0;
}

bool palindrome(long n)
{
    long reversedInteger = 0, remainder, originalInteger;

    originalInteger = n;

    while( n != 0 )
    {
        remainder = n % 10;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10;
    }

    if(originalInteger == reversedInteger)
        return true;
    else
        return false;

    return 0;

}
