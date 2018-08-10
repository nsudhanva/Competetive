#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string a = "000000";
    string b = "111111";

    if ((s.find(a) != string::npos) || (s.find(b) != string::npos)){
        cout << "Sorry, sorry!" << endl;
    }
    else{
        cout << "Good luck";
    }

}
