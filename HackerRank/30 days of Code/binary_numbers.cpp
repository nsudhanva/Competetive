#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n, i, countt = 0, countt2 = 0;
    cin >> n;
    string x;

    while(n > 0){

        if(n % 2 == 1){
            countt++;
            if(countt >= countt2){
                countt2 = countt;
            }
        }
        else{
            countt = 0;
        }

        //x = x + to_string(n % 2);
        n = n / 2;
    }

    //reverse(x.begin(), x.end());

    //cout << x;
    cout << countt2;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
