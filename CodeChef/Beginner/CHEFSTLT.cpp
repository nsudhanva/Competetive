#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string a, b;
		cin >> a >> b;

		int same, qcount, diff;
		same = qcount = diff = 0;

		for (int i = 0; i < a.length(); ++i)
		{
			if(a[i] == '?' || b[i] == '?'){
				qcount++;
			}
			else if(a[i] == b[i]){
				same++;
			}
			else{
				diff++;
			}
		}

		cout << diff << " " << diff + qcount << endl;
	}
}
