#include <iostream>
#include <unordered_set>
#include <vector>

using std::vector, std::unordered_set;

// class Solution {
//    public:
//     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         vector<vector<int>> result(2);
//         unordered_set<int> seen;
//
//         // for the first array
//         for (int i = 0; i < nums1.size(); i++) {
//             int n = nums1[i];
//
//             // Skip if we've already processed this number
//             if (seen.find(n) != seen.end()) continue;
//
//             // Mark as processed
//             seen.insert(n);
//
//             bool found = false;
//
//             for (int j = 0; j < nums2.size(); j++) {
//                 if (nums2[j] == n) {
//                     found = true;
//                     break;
//                 }
//             }
//
//             if (!found) result[0].push_back(n);
//         }
//
//         // for the 2nd array
//         for (int i = 0; i < nums2.size(); i++) {
//             int n = nums2[i];
//
//             // Skip if we've already processed this number
//             if (seen.find(n) != seen.end()) continue;
//
//             // Mark as processed
//             seen.insert(n);
//
//             bool found = false;
//
//             for (int j = 0; j < nums1.size(); j++) {
//                 if (nums1[j] == n) {
//                     found = true;
//                     break;
//                 }
//             }
//
//             if (!found) result[1].push_back(n);
//         }
//
//         return result;
//     }
// };

class Solution {
   public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<vector<int>> result(2);

        for (int x : set1) {
            if (set2.find(x) == set2.end()) result[0].push_back(x);
        }

        for (int x : set2) {
            if (set1.find(x) == set1.end()) result[1].push_back(x);
        }

        return result;
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    Solution sol;
    vector<vector<int>> result = sol.findDifference(nums1, nums2);

    std::cout << "Result: ";
    for (const auto& vec : result) {
        std::cout << "[";
        for (size_t i = 0; i < vec.size(); ++i) {
            std::cout << vec[i];
            if (i < vec.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "] ";
    }
    std::cout << std::endl;

    return 0;
}
