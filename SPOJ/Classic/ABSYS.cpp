#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int main()
{
    int t, i, j;
    int p, q, r;
    cin >> t;
    cin.ignore();
    string s;

    for(i = 0; i < t; i++){

        string a = "" ,b = "" ,c = "";
        string x = "machula";

        getline(cin, s);
        if(s.empty()){
            getline(cin, s);
        }
        for(j = 0; j < s.length(); j++){
            if(isspace(s[j])){
                break;
            }
            else{
                 a = a + s[j];
            }
        }

        //cout << "A: " << a << endl;

        size_t foundp = s.find("+");

        if (foundp != string::npos){
            for(j = foundp + 2; j < s.length(); j++){
                if(isspace(s[j])){
                    break;
                }
                else{
                     b = b + s[j];
                }
            }
        }

        //cout << "B: " << b << endl;

        size_t founde = s.find("=");

        if (founde != string::npos){
            for(j = founde + 2; j < s.length(); j++){
                if(isspace(s[j])){
                    break;
                }
                else{
                     c = c + s[j];
                }
            }
        }

        //cout << "C: " << c << endl;

        if(a.find(x) != string::npos){
            p = stoi(c) - stoi(b);
            q = stoi(b);
            r = stoi(c);
        } else if(b.find(x) != string::npos){
            q = stoi(c) - stoi(a);
            r = stoi(c);
            p = stoi(a);
        } else if(c.find(x) != string::npos){
            r = stoi(a) + stoi(b);
            p = stoi(a);
            q = stoi(b);
        }

        cout << abs(p) << " + " << abs(q) << " = " << abs(r) << endl;

    }
}
