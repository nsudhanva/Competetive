#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main()
{
    int i;
    string s, x;
    cin >> s;
    string temp = s;


    reverse(s.begin(), s.end());

    if(s.compare(temp)){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}
