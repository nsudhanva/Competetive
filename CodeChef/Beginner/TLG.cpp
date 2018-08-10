#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i, a, b, max_lead = 0, lead, player;
    for(i = 0; i < n; i++){
        cin >> a >> b;

        if(a > b){
            lead = a - b;
            if(lead > max_lead){
                max_lead = lead;
                player = i + 1;
            }
        }
        else{
            lead = b - a;
            if(lead > max_lead){
                max_lead = lead;
                player = i + 1;
            }
        }
    }

    cout << player << " " << max_lead;

}
