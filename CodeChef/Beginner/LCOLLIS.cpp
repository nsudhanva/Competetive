#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
	 	long long int n;
        long long int m;

        cin >> n >> m;
        string s[n];

        long long int count = 0;
        long long int temp = 0;

        long long int i;
        long long int j;

        for(i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        
        for(i = 0; i < m; i++)
        {
            temp = 0;
            for(j = 0; j < n; j++)
            {
                if(s[j][i] == '1')
                	temp = temp + 1;
            }

            temp = temp * (temp - 1) / 2;
            count = count + temp;
        }
        
        cout << count << "\n";
	}
}
