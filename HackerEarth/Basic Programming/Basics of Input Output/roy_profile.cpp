#include <iostream>
using namespace std;

int main()
{
    int i,L, W, H, N;
    cin >> L;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> W >> H;

        if(W < L || H < L){
            cout << "UPLOAD ANOTHER" << endl;
        }
        else if((W > L || H > L) && W == H){
            cout << "ACCEPTED" << endl;
        }
        else {
            cout << "CROP IT" << endl;
        }
    }
}
