#include <bits/stdc++.h>

using namespace std;

int main()
{
   double n, m, a;

    cin >> n >> m >> a;

    cout <<  (unsigned long long)ceil(n / a) * (unsigned long long) ceil (m / a);
}
