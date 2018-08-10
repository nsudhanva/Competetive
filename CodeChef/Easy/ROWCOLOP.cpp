#include <bits/stdc++.h>
#define X 314159

typedef long long LL;
typedef unsigned long long ULL;
using namespace std;

int main()
{
	LL n, q;
	cin >> n >> q;
	LL rows[X] = {0};
	LL columns[X] = {0};
	LL i;
	string str;
	LL s, r;

	for(i = 0; i < q; i++)
	{
	    cin >> str;
	    cin >> s >> r;

	    if(str == "RowAdd")
	    {
	        rows[s] += r;
	    }
	    else if(str == "ColAdd")
	    {
	        columns[s] += r;
	    }	    
	}

	LL maxr = rows[0], maxc = columns[0];

	for(i = 0; i <= n; i++)
	{
	    if(rows[i] > maxr)
	    	maxr = rows[i];
	}

	for(i = 0; i <= n; i++)
	{
	    if(columns[i] > maxc)
	    	maxc = columns[i];
	}

	LL ans = maxr + maxc;
	cout << ans << endl;
}
