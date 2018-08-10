#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string n;
		cin >> n;

		int count = 0;

		for (int i = 0; i < n.size(); ++i)
		{
			// cout << "stoi(n): " << stoi(n) << endl;
			// cout << "n[i]: " << (n[i]) << endl;
			if(n[i] - '0' != 0){
				if(stoi(n) % (n[i] - '0') == 0){
					count++;
				}
			}			
		}

		cout << count << endl;
	}
}
