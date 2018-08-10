#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int i, j, n; 
        LD a[1000], max = 0, cases = 0, sum, prob;
        cin >> n;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                sum = a[i] + a[j];

                if(sum == max)
                {
                    cases++;
                }
                else if(sum > max)
                {
                    max = sum;
                    cases = 1;
                }
            }
        }
        
        ULL total = ((n * (n - 1)) / 2);
        prob = (cases/total);
        
        cout << fixed << setprecision(8) << prob << endl;
        
        max = 0;
        cases = 0;
    }  
}
