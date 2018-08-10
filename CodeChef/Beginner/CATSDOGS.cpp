#include <iostream>
 
 using namespace std;
 
int main()
{
	long long t , c , d , l;
	cin >> t;
	
	for(unsigned long long i = 0 ; i < t ; ++i)
	{
		cin >> c >> d >> l;
		if((max(4*d,4*(c-d)) <= l) and (l <= 4*(c+d)) and (l % 4 == 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
} 
