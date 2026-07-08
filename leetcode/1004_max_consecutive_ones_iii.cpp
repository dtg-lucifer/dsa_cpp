#include <algorithm>
#include <cctype>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using std::string, std::vector;

class Solution {
   public:
    int longestOnes(vector<int>& nums, int k) {
        int win = 0;
        int zc = 0;
        int len = 0;
        int left = 0;

        for (int i = 0; i < nums.size(); i++) {
            // if 1 grow the window
            if (nums[i] == 1) win++;
            // if 0 check how much we found
            if (nums[i] == 0) {
                // count how many zeroes are there
                zc++;
                // if we found < k zeroes then grow window
                win++;

                // if we found > k zero
                // calculate the length
                // shift the window to right until
                while (zc > k) {
                    if (nums[left] == 0) zc--;
                    left++;
                    win--;
                }
            }

            // store the larger length for each window
            len = std::max(win, len);
        }

        return len;
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;

    Solution sol;
    int result = sol.longestOnes(nums, k);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
