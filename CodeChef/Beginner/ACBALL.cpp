#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string a, b;
		cin >> a >> b;

		for (int i = 0; i < a.length(); ++i)
		{
			if(a[i] == 'W' && b[i] == 'W'){
				cout << "B";
			}
			else if(a[i] == 'B' && b[i] == 'B'){
				cout << "W";
			}
			else{
				cout << "B";
			}
		}
		cout << endl;
	}	
}
