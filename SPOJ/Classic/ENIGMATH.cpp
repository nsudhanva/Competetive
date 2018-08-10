#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    unsigned long long a, b, lcm;
    cin >> t;

   for(int i = 0; i < t; i++){
        cin >> a >> b;

        if(a == b){
            cout << "1 1" << endl;
        }
        else
        {
            lcm = (a * b)/std::__gcd(a, b);
            cout << lcm/a << " " << lcm/b << endl;
        }

    }
}
