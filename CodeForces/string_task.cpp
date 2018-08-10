#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

bool isVowel(char ch) {
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch== 'o' || ch == 'u' 
		|| ch == 'A' || ch == 'E' || ch == 'I' || ch== 'O' || ch == 'U' 
		|| ch == 'Y' || ch == 'y')
	    return true;
	else 
		return false;
}


int main()
{
	string s, r;
    cin >> s;

    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += 'a' - 'A';
        }
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            r.append(1, '.');
            r.append(1, c);
        }
    }
    
    cout << r << endl;
}