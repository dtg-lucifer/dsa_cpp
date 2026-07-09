#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

class Solution {
   public:
    int largestAltitude(vector<int>& gain) {
        int current = 0;
        int highest = 0;

        for (int g : gain) {
            current += g;
            highest = std::max(current, highest);
        }

        return highest;
    }
};

int main(int argc, char* argv[]) {
    vector<int> gain = {-5, 1, 5, 0, -7};

    Solution sol;
    int result = sol.largestAltitude(gain);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
