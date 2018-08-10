#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int n;
	cin >> n;

	int count = 0;

	while(n--){
		string s;
		cin >> s;

		if(s == "X++"){
			count++;
		}
		else if(s == "++X"){
			++count;
		}
		else if(s == "X--"){
			count--;
		}
		else if(s == "--X"){
			--count;
		}
	}

	cout << count << endl;
}