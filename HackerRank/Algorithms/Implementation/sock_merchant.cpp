#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n, i, j, countt = 0;
    cin >> n;
    vector<int> c(n);

    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }

    map<int, int> num;

    for(i = 0; i < n; i++){
        num[c[i]]++;
    }

    for(map<int, int>::iterator it = num.begin(); it != num.end(); it++){
         //cout << it->first << " => " << it->second << endl;
            countt = countt + it->second/2;
    }

    cout << countt << endl;

    return 0;
}
