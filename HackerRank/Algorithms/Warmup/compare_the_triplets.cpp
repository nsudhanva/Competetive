#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int i, alice = 0, bob = 0;
    int a[100], b[100];

    for(i = 0; i < 3; i ++)
    {
        cin >> a[i];
    }

    for(i = 0; i < 3; i ++)
    {
        cin >> b[i];
    }

    for(i = 0; i < 3; i ++)
    {
        if(a[i] > b[i]){
            alice++;
        }
        else if(a[i] < b[i]){
            bob++;
        }
    }

    cout << alice << " " << bob;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
