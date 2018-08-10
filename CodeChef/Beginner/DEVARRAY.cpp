#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int size ;
    long long int query ;

	cin >> size ;
	cin >> query ;

	long long int A[size];
	long long int i = 0 ;

    for (i = 0 ; i < size ; i++){
	    long long int number ;
	    cin >> number ;
	    A[i] = number ;
    }
	    
    sort(A, A + size);

    for (i = 0 ; i < query ; i++){
	    long long int number ;
	    cin >> number ;
	    
	    if (number >= A[0] && number <= A[size-1] ){
	        cout << "Yes" << endl ;
	    }
	    else {
	        cout << "No" << endl ;
	    }
    }

}
