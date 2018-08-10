#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long i, j, sum = 0, countt = 0;

    for(i = 1; i <= 10000000; i++){
        sum = sum + i;
        //cout << sum << " ";
        countt = 0;
        for(j = 1; j <= 10000000; j++){
            if(sum % j == 0){
                //cout << j << " ";
                countt++;
            }
        }

        cout << ", " << countt << endl;

        if(countt > 500){
            cout << sum << endl; break;
        }
   }
}
