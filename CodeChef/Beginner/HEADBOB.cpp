#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string S;
        cin >> S;

        int a = 0, b = 0;

        for(int i = 0; i < n; i++){
            if(S[i] == 'Y')
                a = 1;
            else if(S[i] == 'I')
                b = 1;
        }

        if(b == 1)
            cout << "INDIAN\n";
        else if(a == 1)
            cout<<"NOT INDIAN\n";
        else
            cout<<"NOT SURE\n";
    }
}
