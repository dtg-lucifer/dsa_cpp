#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using std::vector;

class Solution {
   public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int, int> occ;

        for (auto n : arr) {
            if (occ.find(n) != occ.end()) {
                occ.find(n)->second++;
            }

            if (occ.find(n) == occ.end()) {
                occ.insert({n, 1});
            }
        }

        std::unordered_set<int> freq;
        for (auto o : occ) {
            if (freq.find(o.second) != freq.end()) {
                return false;
            }

            freq.insert(o.second);
        }

        return true;
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums = {1, 2, 2, 1, 1, 3};

    Solution sol;
    bool result = sol.uniqueOccurrences(nums);

    std::cout << "Result: " << (result ? "true" : "false") << std::endl;

    return 0;
}
