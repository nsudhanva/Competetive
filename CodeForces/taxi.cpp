#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

using namespace std;

int main()
{
	int n;
	cin >> n;

	std::vector<int> a(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int counta = 0, countb = 0, countc = 0, countd = 0;

	for (int i = 0; i < n; ++i)
	{
		if(a[i] == 4){
			countd++;
		}

		if(a[i] == 3){
			countc++;
		}

		if(a[i] == 2){
			countb++;
		}

		if(a[i] == 1){
			counta++;
		}
	}

	int count = countd + min(countc, counta) + min(countb, counta);
	cout << count << endl;
}
