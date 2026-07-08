#include <iostream>
#include <vector>

using std::vector;

class Solution {
   public:
    double findMaxAverage(vector<int>& nums, int k) {
        int window_sum = 0;

        // initial window
        for (int i = 0; i < k; i++) {
            window_sum += nums[i];
        }

        double max_avg = window_sum / (double)k;

        for (int i = k; i < nums.size(); i++) {
            window_sum += nums[i];      // add next
            window_sum -= nums[i - k];  // remove left

            double curr_avg = window_sum / (double)k;
            max_avg = std::max(max_avg, curr_avg);
        }

        return max_avg;
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    Solution sol;
    double result = sol.findMaxAverage(nums, k);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
