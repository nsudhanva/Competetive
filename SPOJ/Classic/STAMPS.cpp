#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int scenarios;
    unsigned long long stampsToBorrow, friends;
    unsigned long long i, j, k, sum, insum;

    cin >> scenarios;

    for(i = 0; i < scenarios; i++){
        cin >> stampsToBorrow >> friends;
        vector<unsigned long long> a(friends);
        sum = 0;
        insum = 0;

        for(j = 0; j < friends; j++){
            cin >> a[j];
            sum = sum + a[j];
        }

        if(sum < stampsToBorrow){
            cout << "Scenario #" << i + 1 << ":" << endl;
            cout << "impossible" << endl;
            if(i != scenarios - 1)
                cout << endl;
        }
        else{

//            for(k = 0; k < a.size(); k++){
//                cout << a[k] << " ";
//            }
//            cout << endl;

            sort(a.begin(), a.end());
            reverse(a.begin(), a.end());

//            for(k = 0; k < a.size(); k++){
//                cout << a[k] << " ";
//            }
//            cout << endl;

            for(k = 0; k < a.size(); k++){
                insum = insum + a[k];
//                cout << insum << endl;
                if(insum >= stampsToBorrow){
                    cout << "Scenario #" << i + 1 << ":" << endl;
                    cout << k + 1 << endl;
                    cout << endl;
                    break;
                }
            }
        }
    }
}
