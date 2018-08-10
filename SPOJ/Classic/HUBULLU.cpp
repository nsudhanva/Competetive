#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    unsigned long long n, m, i;
    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n >> m;

        if(m == 0){
            cout << "Airborne wins." << endl;
        }
        else{
            cout << "Pagfloyd wins." << endl;
        }
    }
}
