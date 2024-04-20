#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> copyOfNums(nums);
        for (int num : nums) {
            copyOfNums.push_back(num);
        }
        return copyOfNums;
    }
};

int main(int argc, char** argv) {
    vector<int> nums = {1,2,1};
    Solution solution;

    vector<int>output =solution.getConcatenation(nums);

    for(auto elems : output) {
        cout << elems << " ";
    }
}