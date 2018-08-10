#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int t, N, i;

	long long int array[ 1000000 ], sum;
	cin >> t;

	while(t > 0) {
		cin >> N;

		for(i = 0; i < N; i++){
			cin >> array[i];
		}

		sum = 0;

		for(i = 0; i < N; i++){
			sum = (sum + array[i]) % N;
		}

		if (sum == 0) {
			printf( "YES\n" );
		}
		else {
			printf( "NO\n" );
		}
		--t;
	}
}
