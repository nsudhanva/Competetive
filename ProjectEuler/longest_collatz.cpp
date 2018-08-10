#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long n = 2, countt = 0, temp, largest = 0, num;

    for(n = 2; n <= 1000000; n++){
        countt = 0;
        temp = n;
        //cout << "Entered for " << temp << endl;
        while(temp != 1){
            if(temp % 2 == 0){
                temp = temp / 2;
                //cout << temp << endl;
            }
            else{
                temp = 3 * temp + 1;
                //cout << temp << endl;
            }
            countt++;

            if(countt > largest){
                largest = countt;
                num = n;
            }
        }
        cout << "Count for " << n << " is " << countt + 1 << endl;
    }
    cout << "Largest chain " << largest << endl;
    cout << "Number " << num;
}
