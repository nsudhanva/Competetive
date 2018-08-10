#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,i;
    cin >> n;
    vector<int> a(n);

    for(i = 0; i<n ;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    int count = 0;

    for(int i = 1; i < n; i++)
    {
        if((a[i] - a[i - 1]) >= 2)
        {
            cout << "NO";
            break;
        }
        else 
            count++;
    }   

    if(count == (n - 1)) 
        cout << "YES";
}
