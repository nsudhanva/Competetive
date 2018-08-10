#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    long long int n;
    long long int sum = 0;
    cin >> n;
    vector<long long int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        sum = sum + (arr[arr_i]);
        cout<<sum<<endl;
    }

    cout<<sum<<endl;
    return 0;
}
