#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

class ANDEquation{
public:
	int restoreY(std::vector<int> A);
};

int ANDEquation::restoreY(std::vector<int> A)
{
	for (int i = 0; i < A.size(); i++) {
      	int xs = ~0;

      	for (int j = 0; j < A.size(); j++) {
        	if (j != i)
        		xs &= A[j];
      	}

      	if (A[i] == xs) 
      		return A[i];
    }
    return -1;
}