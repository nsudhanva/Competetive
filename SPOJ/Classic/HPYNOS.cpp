#include <bits/stdc++.h>

using namespace std;

int countt = 0, arr[1000] = {0};

long happy(long a)
{
    long b = 0;
    arr[countt] = a;

    while(a > 0)
    {
        b += pow(a % 10, 2);
        a = a / 10;
    }

    countt++;

    if(b == 1){
        return countt;
    }

    for(int i = 0; i < countt; i++){
        if(arr[i] == b){
            return -1;
        }
    }

    happy(b);
}

int main()
{
    long n, c;
    cin >> n;
    c = happy(n);
    cout << c << endl;
}
