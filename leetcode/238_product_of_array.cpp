#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using std::vector, std::string;

class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        std::unordered_map<int, int> map;

        int n = (int)nums.size();

        for (int i = 0; i < n; i++) {
            int product = 1;

            if (map.find(nums[i]) != map.end()) {  // check if the value is already calculated
                result.push_back(map[nums[i]]);    // add that to result
                continue;                          // no need to recalculate
            }

            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }

                product *= nums[j];
            }

            result.push_back(product);  // add the product in the result array
            map[nums[i]] = product;     // save the product in the map
            product = 1;                // reset the product
        }

        return result;
    }
};

int main(int argc, char* argv[]) {
    vector<int> input = {1, 2, 3, 4};
    Solution sol;

    vector<int> output = sol.productExceptSelf(input);

    std::cout << "Result: ";
    for (int n : output) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
