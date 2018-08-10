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
        int x, y, k, n, i, j;
        cin >> x >> y >> k >> n;

        int p[n], c[n];

        for (i = 0; i < n; i++)
        {
            cin >> p[i] >> c[i];
        }

        int flag = 0;
        int pages = x - y;

        for (i = 0; i < n; i++)
        {
            if (p[i] >= pages && k >= c[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            cout << "LuckyChef" << endl;
        }
        else
        {
            cout << "UnluckyChef" << endl;
        }
    }
}
