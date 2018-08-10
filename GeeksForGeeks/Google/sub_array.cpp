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
        int n, s;
        cin >> n >> s;

        int a[n];

        int sum = 0, start = 0, end = 0, flag = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        while(end < n){
            sum += a[end];

            if(sum > s){
                start++;
                end = start;
                sum = 0;
            }
            else if(sum == s){
                flag = 1;
                break;
            }
            else{
                end++;
            }
        }

        if(flag == 1){
            cout << start + 1 << " " << end + 1 << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}
