#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long t, i, n, k, m, atoms, time;
    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n >> k >> m;

        time = 0;

        if(k <= m / n){
            time++;

            atoms = n * k;

            while(k <= m / atoms){
                time++;
                atoms = atoms * k;
            }
        }

        cout << time << endl;
    }
}
