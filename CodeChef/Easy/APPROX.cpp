#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	LL places;   
    
    LL t;
    cin >> t;

    while(t--){
     	LL numer = 103993;
    	LL denom = 33102;

    	cin >> places;
    	LL quot;
    	LL i;
 
	    quot = numer / denom;
	    if(places != 0)
	    	printf("%d.", quot);
	    else
	    	printf("%d", quot);

	    numer -= denom * quot;
	 
	    for(i = 0; i < places; i++) {
	        numer *= 10;
	        quot = numer / denom;
	        printf("%d", quot);
	        numer -= denom * quot;
	    }
	    printf("\n");
	}

}
