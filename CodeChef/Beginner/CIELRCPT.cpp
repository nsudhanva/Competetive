#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, i, count, temp;
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> x;

        count = 0;

        temp = 2048;

        while(x != 0){
            count = count + x/temp;
            x = x % temp;
            temp = temp / 2;
        }

        cout << count << endl;
    }
}
