#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

class Solution {
   public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());

        int max = *std::max_element(candies.begin(), candies.end());

        std::cout << max << std::endl;

        for (int i = 0; i < (int)candies.size(); i++) {
            if ((candies[i] + extraCandies) >= max) {
                result[i] = true;
                continue;
            }
            result[i] = false;
        }

        return result;
    }
};

int main(int argc, char* argv[]) {
    vector<int> candies = {2, 3, 5, 1, 3};
<<<<<<< HEAD

    Solution sol;

    vector<bool> output = sol.kidsWithCandies(candies, 3);

    std::cout << "Result: ";
    for (bool o : output) {
        std::cout << (o ? "true" : "false") << " ";
||||||| 801b28f
=======
    int extraCandies = 3;

    Solution sol;

    vector<bool> result = sol.kidsWithCandies(candies, extraCandies);

    std::cout << "Result: ";
    for (auto b : result) {
        std::cout << b << " ";
>>>>>>> 59fe5049ee2abeaa9b7b96920532302196add647
    }
    std::cout << std::endl;

    return 0;
}
