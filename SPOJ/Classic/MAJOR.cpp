#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long t, i, j;
    cin >> t;
    for(i = 0; i < t; i++){
        unsigned long long n, key = 0;
        cin >> n;
        vector<unsigned long long> a(n);

        for(j = 0; j < n; j++)
            cin >> a[j];

        map<unsigned long long, unsigned long long> counts;

        for(j = 0; j < a.size(); j++){
            counts[a[j]]++;
        }

//        for(auto x : counts){
//            cout << x.first << "=>" << x.second << endl;
//        }

        for(auto x : counts){
            if(x.second > (a.size()/ 2)){
                key = x.first;
            }
        }

        if(key == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES " << key << endl;
        }


    }
}
