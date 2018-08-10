#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    for(i = 0; i < n; i++){
        string s;
        cin >> s;

        int letter_count;

        if(s.length() > 10){
            letter_count = s.length() - 2;
            s.replace(1, s.length() - 2, to_string(letter_count));
            cout << s << endl;
        }
        else{
            cout << s << endl;
        }
    }

}
