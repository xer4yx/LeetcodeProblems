#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) return {i, j};
            }
        }
        return {};
    }
};
int main(int args, char** argv) {
    vector<int> nums = {-1,-2,-3,-4,-5};
    int target = -8;
    Solution solution;
    vector<int> answer = solution.twoSum(nums, target);

    for (auto indexes : answer) {
        cout << indexes << " ";
    }

    return 0;
}