#include<iostream>

using namespace std;

int main()
{
    int a[] = {1, 7, 2, 4};

    for(int i = 0; i < 4; i ++){
        for(int j = i + 1; j < 4; j++){
            cout << a[i] << " + " << a[j] << " = " << a[i] + a[j] << endl;
        }
        //cout << a[i] << endl;
    }
}
