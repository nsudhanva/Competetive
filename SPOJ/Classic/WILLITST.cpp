#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;

    while(n % 2 == 0)
        n = n / 2;

    if(n == 1){
        cout << "TAK" << endl;
    }
    else{
        cout << "NIE" << endl;
    }
}

/*  if(n & (n - 1) == 0)
        cout << "TAK";
    else
        cout << "NIE";
