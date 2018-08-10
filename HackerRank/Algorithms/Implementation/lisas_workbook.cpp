#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, k, i, j, special = 0, page = 0;

    cin >> n >> k;
    vector<int> t(n);

    for(i = 1; i < n + 1; i++)
    {
        cin >> t[i];
    }

    for(i = 1; i < n + 1; i++)
    {
        //cout << "N: " << i << endl;
        for(j = 1; j < t[i] + 1; j++)
        {
            if(j == 1 || j % k == 1){
                //cout << "Break: " << endl;
                page++;
            }

            if(j == page){
                special++;
            }

            //cout << "Problems: " << j << endl;
        }

    }

    if(n == 1 && k == 1){
         cout << t[1] << endl;
    }
    else{
        cout << special << endl;
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
