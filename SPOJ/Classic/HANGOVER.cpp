#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    float n, sum, i, count;

    while(1){
        cin >> n;
        i = 2.00;
        sum = 0.00;
        count = 0;

        if(n == 0.00){
            break;
        }

        while(n > sum){
            sum = sum + 1.0/(i);
            i++;
            count++;
        }

        cout << count << " card(s)" << endl;

    }

}
