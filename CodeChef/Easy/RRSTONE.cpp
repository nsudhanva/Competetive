#include <bits/stdc++.h>

typedef unsigned long long LL;
typedef unsigned long long ULL;
using namespace std;

int main()
{
	long int N, K;
	cin >> N >> K;

	long long int A[100000], MAX, MAX2 = 0;
	cin >> A[0];

	MAX = A[0];

	for(int i = 1; i < N; i++){
		cin >> A[i];

		if(A[i] > MAX) 
			MAX = A[i];
	}
 
	if(K == 0) {
		for(int i = 0; i < N; i++) 
			cout << A[i] << " ";
		return 0;
	}

	for(int i = 0; i < N; i++){
		A[i] = MAX - A[i];

		if(A[i] > MAX2) 
			MAX2 = A[i];
	}

	if(K % 2 == 1){
		for(int i = 0; i < N; i++) 
			cout << A[i] << " ";
		return 0;
	}	
	else{
		for(int i = 0; i < N; i++) 
			cout << MAX2 - A[i] <<" ";
	}	

}
