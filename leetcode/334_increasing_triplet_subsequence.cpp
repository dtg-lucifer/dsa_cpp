#include <climits>
#include <iostream>
#include <vector>

using std::vector;

class Solution {
   public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums) {
            if (num <= first) {
                first = num;
            }

            else if (num <= second) {
                second = num;
            }

            else {
                // num > second > first
                return true;
            }
        }

        return false;
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution sol;

    bool output = sol.increasingTriplet(nums);

    std::cout << "Result: " << (output ? "true" : "false") << std::endl;

    return 0;
}
