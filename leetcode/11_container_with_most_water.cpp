#include <climits>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::vector, std::string, std::stringstream;

class Solution {
   public:
    int maxArea(vector<int>& height) {
        int first = 0;
        int last = height.size() - 1;
        int maxArea = 0;

        while (first < last) {
            int h = std::min(height[first], height[last]);
            int w = last - first;
            int area = h * w;

            maxArea = std::max(maxArea, area);

            // Move the smaller height
            if (height[first] < height[last]) {
                first++;
            } else {
                last--;
            }
        }

        return maxArea;
    }
};

int main(int argc, char* argv[]) {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    Solution sol;
    int result = sol.maxArea(height);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
