#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    using namespace std;

    int N;
    auto less_then_1 = [](int n)->bool{ return n < 1;};

    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) cin >> arr[i];

    int prev_size = arr.size();
    while (!arr.empty())
    {
        cout << prev_size << endl;
        int minim = *min_element(arr.begin(), arr.end());
        for (int& n : arr)
        {
            n = n - minim;
        }
        // Remove elements which are less then 1
        arr.erase(remove_if(arr.begin(), arr.end(), less_then_1), arr.end());
        prev_size = arr.size(); // Update the count of elements
    }
}
