#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
 	int t; 
 	cin >> t;

    while(t--){
	    int n, m, p, maxn = INT_MIN, minn = INT_MAX;
	    cin >> n >> m;
	    int i;

		while(m--)
		{
			cin >> p;
			maxn = max(p, maxn);
			minn = min(p, minn);
		}

		for(i = 0; i < n; i++)
			cout << max(abs(i - maxn), abs(i - minn)) << endl;
	}
}
