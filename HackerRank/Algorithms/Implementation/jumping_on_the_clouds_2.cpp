#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int i, n, k;
    cin >> n >> k;
    vector<int> c(n);

    for(i = 0; i < n; i++){
        cin >> c[i];
    }

    int E = 100;
    E = E - n / k;

    for(i = 0; i < n / k; i++)
        if(c[i * k] == 1)
            E = E - 2;

    cout << E;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
//  HACKERRANK SOLUTION
// ======================
//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//int main(){
//    int n;
//    int k;
//    cin >> n >> k;
//    int thunder_cloud = 0;
//    for(int i = 0;i < n;i++){
//       int ci;
//       cin >> ci;
//       if(i % k == 0)
//        thunder_cloud = thunder_cloud + ci;
//    }
//    cout << 100 - n/k - thunder_cloud*2 << endl;
//    return 0;
//}
