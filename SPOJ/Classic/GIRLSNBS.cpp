#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    int girls, boys, min_regularity;

    while(1){
        cin >> girls >> boys;

        if(girls == -1 && boys == -1){
            break;
        }
        else{
            if(girls == boys){
                min_regularity = 1;
            }
            else if(girls == 0 && boys == 0){
                min_regularity = 0;
            }
            else if(girls > boys){
                min_regularity = (girls + boys)/(boys + 1);
            }
            else{
                min_regularity = (girls + boys)/(girls + 1);
            }
        }

        cout << min_regularity << endl;

    }
}
