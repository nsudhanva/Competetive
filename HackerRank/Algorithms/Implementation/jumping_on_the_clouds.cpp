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
    int n, count;
    cin >> n;
    vector<int> c(n);
    for(int i = 0; i < n; i++){
       cin >> c[i];
    }

    int jumps = 0, i = 0;

    while(1){
        if(i + 2 < n && c[i + 2] == 0){
            i = i + 2;
        }
        else if(i + 1 < n){
            i++;
        }
        else{
            break;
        }

        jumps++;
    }

    cout << jumps << endl;


    return 0;
}
