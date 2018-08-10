#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	std::vector<int> v(n);
	std::vector<bool> a(n);
	std::vector<bool> b(n);

	int cycles = 0;

	for (int i = 1; i <= n; ++i)
	{
		cin >> v[i];
		a[i] = false;
	}	

	int d = 1;
	int tempx = d;

	while(1){
		//cout << i << " ";
		d = v[d];

		a[d] = true;

		if(d == tempx){
			//cout << i << " ";
			cycles++;
			//cout << endl;

			for (int j = 1; j <= n; ++j)
			{
				// cout << "J: " << j << endl;
				// cout << "A[J]: " << a[j] << endl;

				if(a[j] == false){
					d = j;	
					tempx = j;				
					break;
				}				
			}
		}

		bool flag = true;

		for (int i = 1; i <= n; ++i)
		{
			if(a[i] == false){
				flag = false;
			}
		}

		if(flag){
			break;
		}

		// for (int i = 1; i <= n; ++i)
		// {
		// 	cout << a[i] << endl;
		// }
	}

	cout << cycles << endl;

	int i = 1;
	int temp = i;

	while(1){
		cout << i << " ";
		i = v[i];

		b[i] = true;

		if(i == temp){
			cout << i << " ";
			cycles++;
			cout << endl;

			for (int j = 1; j <= n; ++j)
			{
				// cout << "J: " << j << endl;
				// cout << "A[J]: " << a[j] << endl;

				if(b[j] == false){
					i = j;	
					temp = j;				
					break;
				}				
			}
		}

		bool flag = true;

		for (int i = 1; i <= n; ++i)
		{
			if(b[i] == false){
				flag = false;
			}
		}

		if(flag){
			break;
		}

		// for (int i = 1; i <= n; ++i)
		// {
		// 	cout << a[i] << endl;
		// }
	}



}

