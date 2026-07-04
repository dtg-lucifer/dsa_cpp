#include <iostream>
#include <vector>

using std::vector;

class Solution {
   public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++) {
            int left = (i == 0) ? 0 : flowerbed[i - 1];
            int right = (i == flowerbed.size() - 1) ? 0 : flowerbed[i + 1];

            if (left == 0 && flowerbed[i] == 0 && right == 0) {
                flowerbed[i] = 1;
                n--;

                if (n <= 0) return true;
            }
        }

        return n <= 0;
    }
};

int main(int argc, char* argv[]) {
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    Solution sol;

    bool output = sol.canPlaceFlowers(flowerbed, n);

    std::cout << "Result: " << (output ? "true" : "false") << std::endl;

    return 0;
}
