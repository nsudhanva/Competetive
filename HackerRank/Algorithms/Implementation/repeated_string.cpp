#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

#define sz(a) int((a).size())
#define all(c) c.begin(), c.end()

using namespace std;


int main() {

    long long n, countt = 0, i;
    string s, x;
    getline(cin, s);
    cin >> n;

    //countt = std::count(x.begin(), x.end() - (x.length() - n), 'a');

    //cout << x << endl;

    //cout << countt << endl;

    cout << ((n / sz(s)) * count(all(s), 'a') + count(all(s)-(sz(s)-n%sz(s)),'a')) << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
