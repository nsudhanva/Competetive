#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long a, b, c, d;
		cin >> a >> b >> c >> d;

		unsigned long long count = 0;

		for(unsigned long long i = a; i <= b; i++){
			if(i < c){
				count += (d - c) + 1;
			}
			else if(i == c){
				count += (d - c);
			}
			else if((d - i) >= 0){
				count += (d - i);
			}
		}

		if(count >= 0){
			cout << count << endl;
		}
		else{
			cout << "0" << endl;
		}

	}
}
