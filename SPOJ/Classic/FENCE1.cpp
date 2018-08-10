#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    while(1){
        cin >> n;

        if(n == 0){
            break;
        }

        double area = (n * n)/(2 * 3.141592);

        cout << fixed << setprecision(2) << area << endl;
    }
}
