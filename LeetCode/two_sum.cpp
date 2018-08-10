#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        int i, j;
        vector<int> x;
        for(i = 0; i < nums.size(); i++){
            for(j = i + 1; j < nums.size() - 1; j++){
                if((nums[i] + nums[j]) == target){
                    x.push_back(i);
                    x.push_back(j);
                }
            }
        }
        return x;
    }
};

int main()
{
    int n, i;
    vector<int> x = {3, 2, 4};
    Solution s;
     vector<int> y = s.twoSum(x , 6);

    cout << "[";
    for(i = 0; i < y.size(); i++){
        cout << y[i];
        if(y.size() - 1 != i){
            cout << ",";
        }
    }

    cout << "]" << endl;
}
