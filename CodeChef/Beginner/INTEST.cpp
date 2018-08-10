#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unsigned long long n, k, i, count = 0;
    cin >> n >> k;

    vector <int> t(n);

    for(i = 0; i < n; i++){
        cin >> t[i];

        if(t[i] % k == 0){
            count++;
        }
    }

    cout << count;
}
