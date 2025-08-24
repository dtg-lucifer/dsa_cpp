#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
   public:
    int longestSubarray(std::vector<int>& nums) {
        // Number of zero's in the window.
        int zeroCount = 0;
        int longestWindow = 0;
        // Left end of the window.
        int start = 0;

        for (std::vector<int>::size_type i = 0; i < nums.size(); i++) {
            zeroCount += (nums[i] == 0);

            // Shrink the window until the count of zero's
            // is less than or equal to 1.
            while (zeroCount > 1) {
                zeroCount -= (nums[start] == 0);
                start++;
            }

            longestWindow = std::max(longestWindow, (int)i - start);
        }

        return longestWindow;
    }
};

int main() {
    Solution sol;

    std::vector<int> nums1{1, 1, 0, 1};
    std::vector<int> nums2{0, 1, 1, 1, 0, 1, 1, 0, 1};
    std::vector<int> nums3{1, 1, 1};

    std::cout << sol.longestSubarray(nums1) << std::endl;  // 3
    std::cout << sol.longestSubarray(nums2) << std::endl;  // 5
    std::cout << sol.longestSubarray(nums3) << std::endl;  // 2
}
