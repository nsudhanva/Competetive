#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int l;
    int countt = 0;
    cin >> n >> k;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n;j++)
        {
            if((a[i] + a[j]) % k == 0 && i < j)
                countt++;
        }
    }

    cout << countt <<endl;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
