#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, count;
    cin >> t;

    int n, m, d;
    for(i = 0; i < t; i++){
        cin >> n >> m >> d;

        vector<int> a(n);
        for(j = 0; j < n; j++){
            cin >> a[j];
        }

        sort(a.begin(), a.end());

        count = 0;

        for(j = 0; j < m; j++){
            a[j] = a[j] - d;

            if(a[j] > 0){
                count++;
            }
        }

        if(count >= m){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

}
