#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    string s;
    cin >> s;

    for(i = 0; i < s.length(); i++){

        cout << strupr(s[i]) << endl;
    }

}
