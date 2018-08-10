#include <bits/stdc++.h>

using namespace std;

int rem(int a, string y)
{
    int p = 0, i;
    for(i = 0; y[i] != '\0'; i++){
        p = ((y[i] - '0') + p * 10) % a;
    }
    return p;
}

int gcd(int a, int b)
{
    if(b == 0){
        return a;
    }
    else
        return gcd(b, a % b);
}


int main()
{
    unsigned long long n, i, j, x, num;
    string y;

    cin >> n;
    for(i = 0; i < n; i++){
        cin >> x >> y;

        if(x == 0){
            cout << y << endl;
        }
        else{
            num = rem(x, y);
            cout << gcd(x, num) << endl;
        }
    }

}
