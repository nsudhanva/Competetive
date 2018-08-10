#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

bool isPrime(int x)
{
    if (x < 2)
        return false;

    for(int i = 2; i <= sqrt(x); i++)
    {
        if ((x % i) == 0)
            return false;
    }

    return true;
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		int l; 
		cin >> l;

		string s;
		cin >> s;

		for (int i = 0; i < l; ++i)
		{
			int count1 = 0, count2 = 0;
			
			if(!isPrime(int(s[i]))){
				int temp1 = int(s[i]);
				int temp2 = int(s[i]);

				while(!isPrime(int(temp1))){
					temp1--;
					count1++;
				}

				while(!isPrime(int(temp2))){
					temp2++;
					count2++;
				}

				if(count1 < count2 && isalpha(char(temp1))){
					s[i] = temp1; 						
				}
				else if(count1 < count2){
					s[i] = temp2;						
				}

				if(count2 < count1 && isalpha(char(temp2))){
					s[i] = temp2; 						
				}
				else if(count2 < count1){
					s[i] = temp1;						
				}

				if(count2 == count1){
					s[i] = temp1; 						
				}					
			}
		}

		cout << s << endl;
	}
}
