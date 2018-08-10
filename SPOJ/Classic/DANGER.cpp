#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        string s, x;
        cin >> s;
        x = s;
        reverse(s.begin(), s.end());

        if(s == x){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
