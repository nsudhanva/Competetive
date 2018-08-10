#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		bool flag = false;
		
		if (s.find("101") != std::string::npos) {
		    flag = true;
		}

		if(s.find("010") != std::string::npos){
			flag = true;
		}

		if(flag){
			cout << "Good" << endl;
		}
		else{
			cout << "Bad" << endl;
		}
	}
}
