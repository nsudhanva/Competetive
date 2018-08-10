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

		if(a == b){
			cout << "YES" << endl;
		}
		else if(a.size() == b.size() && a != b){
			cout << "NO" << endl;
		}
		else{

			int j = 1;

			for (int i = 1; i <= a.size(); ++i)
			{
				while(j < b.size()){
					if(b[j] == a[i]){
						break;
					}
					j++;
				}

				if(j > b.size()){
					cout << "NO" << endl;
				}

				i++;
				j++;
			}

			cout << "YES" << endl;
		}
	}
}
