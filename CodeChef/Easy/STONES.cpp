#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string a, b;
		cin >> a >> b;

		int count = 0;

		for (int i = 0; i < b.size(); ++i)
		{
			for (int j = 0; j < a.size(); ++j)
			{
				if(a[j] == b[i]){
					count++;
					break;
				}
			}
		}
	
		cout << count << endl;

	}
}
