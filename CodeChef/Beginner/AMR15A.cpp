#include <bits/stdc++.h>

using namespace std;

bool isEven(int n)
{
	if(n % 2 == 0){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	int n;
	cin >> n;

	int even_count = 0;
	int odd_count = 0;

	for (int i = 0; i < n; ++i)		
	{
		int x;
		cin >> x;

		if(isEven(x)){
			even_count++;
		}
		else{
			odd_count++;
		}
	}

	if(even_count > odd_count){
		cout << "READY FOR BATTLE" << endl;
	}
	else{
		cout << "NOT READY" << endl;
	}
}

