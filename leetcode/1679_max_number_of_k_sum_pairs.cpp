#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

class Solution {
   public:
    int maxOperations(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());

        int first = 0;
        int second = nums.size() - 1;
        int operations = 0;

        while (first < second) {
            int sum = nums[first] + nums[second];
            if (sum == k) {
                first++;
                second--;
                operations++;
                continue;
            }

            if (sum < k) {
                first++;
                continue;
            }

            second--;
        }

        return operations;
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums = {1, 2, 3, 4};
    int k = 5;

    Solution sol;
    int result = sol.maxOperations(nums, k);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
