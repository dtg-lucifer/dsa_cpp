#include <iostream>
#include <vector>

using std::vector;

class Solution {
   public:
    int pivotIndex(vector<int>& nums) {
        int total = this->sumOfNums(nums);
        int left_sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int right_sum = total - left_sum - nums[i];

            if (left_sum == right_sum) return i;

            left_sum += nums[i];
        }

        return -1;
    }

   private:
    int sumOfNums(vector<int>& nums) {
        int sum = 0;
        for (int n : nums) {
            sum += n;
        }
        return sum;
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    Solution sol;
    int result = sol.pivotIndex(nums);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
