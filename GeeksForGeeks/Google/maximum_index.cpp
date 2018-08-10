#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min = 0, max = n - 1, output;
        
        for (int i = 0; i < n; i++)
        {
            if(a[min] <= a[max]){
                output = max - min;
                break;
            }
            else{
                max--;
            }
        }

        cout << output << endl;
    }
}
