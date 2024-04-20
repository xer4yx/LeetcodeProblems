#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> arrFromPermutation = {};
        for (int i = 0; i < nums.size(); i++) {
            arrFromPermutation.push_back(nums[nums[i]]);
        }
        return arrFromPermutation;
    }
};

int main(int argc, char** argv) {
    vector<int> nums = {0,2,1,5,3,4};
    Solution solution;

    vector<int> output = solution.buildArray(nums);

    for (int num:output) {
        cout << num;
    }

    return 0;
}