#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;

	int k;
	cin >> k;

	int count = 0;
	int i;

	for (i = 0; i < min(s.length(), t.length()); ++i)
	{
		if(s[i] != t[i]){
			break;
		}
	}

	int d = s.length() - i;
	int a = t.length() - i;

	int p = k - d - a;

	if(p == 0){
		cout << "Yes" << endl;
	}
	else if(p < 0){
		cout << "No" << endl;
 	}
 	else{
 		if(p % 2 == 0){
 			cout << "Yes" << endl;
 		}
 		else{
 			if(p >= 2 * i){
 				cout << "Yes" << endl;
 			}
 			else{
 				cout << "No" << endl;
 			}
 		}
 	}
	
}
