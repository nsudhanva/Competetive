#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		unsigned long long l, d, s, c, x;
		cin >> l >> d >> s >> c;			

		if(log(c + 1.0) * (d - 1) >= log(l) - log(s)){
			cout << "ALIVE AND KICKING" << endl;
		}
		else{
			cout << "DEAD AND ROTTING" << endl;
		}

	}
}
