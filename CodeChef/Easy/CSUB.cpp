#include <bits/stdc++.h>

using namespace std;

int main()
{
   long int t, i, n;
   cin >> t;

	while(t--)
    {
    	cin >> n;
     	string k;

     	cin >> k;

       	long long int count = 0;

      	for(i = 0; i < n; i++)
      	{
          	if(k[i] == '1')
          	{
              	count++;
          	}
      	}

    	long long  int j = count * (count + 1) / 2;
      	cout << j << endl;
    }
}
 