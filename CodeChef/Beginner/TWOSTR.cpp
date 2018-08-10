#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string a, b;
		cin >> a >> b;

		bool flag = true;

		for (int i = 0; i < a.length(); ++i)
		{
			if(a[i] != '?' && b[i] != '?'){
				if(a[i] != b[i]){
					flag = false;
				}	
			}			
		}

		if(flag){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}

	
}
