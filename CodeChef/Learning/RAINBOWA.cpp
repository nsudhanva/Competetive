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
        int i, j, h;
        int a[101];
        cin >> n;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int flag = 1;
        for (i = 0; i < n / 2; i++)
        {
            if (a[i] != a[n - 1 - i])
            {
                flag = 0;

                break;
            }
        }

        if (flag == 1)
        {
            for (i = 0; i <= n / 2; i++)
            {
                if (a[i] > 7 || a[i] < 1)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 1)
        {
            for (j = 1; j <= 7; j++)
            {
                h = 0;
                for (i = 0; i <= (n) / 2; i++)
                {

                    if (a[i] == j)
                    {
                        h = 1;
                        break;
                    }
                }
                if (h == 0)
                {
                    flag = 0;
                }
            }
        }
        if (flag == 0)
        {
            cout << "no" << endl;
        }
        else if (flag == 1)
        {
            cout << "yes" << endl;
        }
    }
}
