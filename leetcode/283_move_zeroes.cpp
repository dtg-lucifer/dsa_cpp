#include <climits>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::vector, std::string, std::stringstream;

// NOTE: Brute Force
// class Solution {
//    public:
//     void moveZeroes(vector<int>& nums) {
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == 0) {
//                 for (int j = i; j < nums.size(); j++) {
//                     int temp = nums[j];
//                     nums[j] = nums[j + 1];
//                     nums[j + 1] = temp;
//                 }
//             }
//         }
//     }
// };

// NOTE: Optimal Solution
class Solution {
   public:
    void moveZeroes(vector<int>& nums) {
        int write = 0;

        // move non-zero elements forward
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[write] = nums[i];
                write++;
            }
        }

        // fill remaining with zeroes
        while (write < nums.size()) {
            nums[write] = 0;
            write++;
        }
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution sol;
    sol.moveZeroes(nums);

    std::cout << "Result: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
