#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n; 

		string s;
		cin >> s;

		vector<int> a(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];

		}

		if(n == 1) 
		{ 
			if(s == "Dee"&& a[0] % 2 == 0)
			{ 
				cout<<"Dee\n";
			} 
			else 
			{ 
				cout<<"Dum\n";
			}
	    }
	    else if(n > 1)
	        {
	           // cout<<"hello"<<endl;
	            cout<<"Dum\n";
	        }
	    //cout<<out<<endl;
		}
}
