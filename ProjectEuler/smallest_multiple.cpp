#include <iostream>

using namespace std;

int main()
{
    long i, j, countt = 0;

    for(j = 1; j <= 1000000000; j++){
        countt = 0;
        for(i = 2; i <= 20; i++){
            //cout << j << "%" << i << endl;
            if(j % i == 0){
                countt++;
            }
        }
        //cout << countt << endl;

        if(countt == 20)
            cout << "J " << j << endl;
        }

}


