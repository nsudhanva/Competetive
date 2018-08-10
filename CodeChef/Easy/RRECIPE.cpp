#include <iostream>
#include <bits/stdc++.h>
#define M 10000009

using namespace std;

typedef unsigned long long int ull;
 
int main()
{
    ull t;
    cin >> t;

    while(t--)
    {
        string a;
        cin >> a;
        ull way = 1, q = 0, temp = 0;
        ull l = a.size();

        for(ull i = 0; i < (l + 1) / 2; i++)
        {
            if(a[i] != '?' && a[l - i - 1] != '?' && a[i] != a[l - i - 1])
            {
                way = 0;
                break;
            }

           	if(a[i] == '?' && a[l - i - 1] == '?')
            {
	            way *= 26;
	            way %= M;
            }
 
        }
        cout << way << endl;
    }
    return 0;
}
