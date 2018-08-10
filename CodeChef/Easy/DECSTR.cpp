#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		
		int a = n / 25;
		int b = n % 25;

		if(b > 0)
		{
	    	for(int i = b; i >= 0; i--)
			{
				char m = i + 'a';
				cout << m;
			}
		}

	    for(int i = 0; i < a; i++)
	    {
	    	for(int j = 25; j >= 0; j--)
	    	{
	    		char c = j + 'a';
			    cout << c;
			}
		}
		
		cout << endl;
	}
	return 0;
} 