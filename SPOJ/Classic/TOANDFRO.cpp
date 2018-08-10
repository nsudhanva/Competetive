#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n, i, j = 0;
    string s;

    while(1){
        cin >> n;
        cin >> s;

        if(n == 0){
            break;
        }

        int length = s.length();

        for(i = 0; i < n; i++){
            while(j < length){
                if((j % (n * 2) == i) || (j % (n * 2) == (n * 2 - i - 1))){
                    cout << s[j++];
                }
                else{
                    j++;
                }
            }
            j = 0;
        }
        cout << endl;
    }

}
