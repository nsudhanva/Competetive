#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int num;
        long long ans = 0;
        cin >> num;

        if(num == 1)
            cout << "0" << endl;
        else
        {
            int i, t = sqrt(num);

            for(i = 2; i <= t; i++)
            {
                if(num % i == 0)
                {
                    if(i == num/i)
                        ans += i;
                    else
                        ans += i + num/i;
                }
            }
            ans++;
            cout << ans << endl;
        }
    }
    return 0;
}
