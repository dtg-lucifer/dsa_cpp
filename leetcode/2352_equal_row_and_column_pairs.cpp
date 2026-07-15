#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using std::string, std::vector, std::unordered_map;

// ---- BRUTE FORCE ----------------------------
class Solution {
   public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid.size();

        for (int i = 0; i < n; i++) {
            vector<int> row = grid[i];

            for (int j = 0; j < n; j++) {
                vector<int> col;

                for (int k = 0; k < n; k++) col.push_back(grid[k][j]);

                if (row == col) count++;
            }
        }
        return count;
    }
};

// class Solution {
//    public:
//     struct VectorHash {
//         size_t operator()(const vector<int>& v) const {
//             size_t hash = 0;
//
//             for (int x : v) {
//                 hash ^= std::hash<int>()(x) + 0x9e3779b9 + (hash << 6) + (hash >> 2);
//             }
//
//             return hash;
//         }
//     };
//
//     int equalPairs(vector<vector<int>>& grid) {
//         int n = grid.size();
//
//         unordered_map<vector<int>, int, VectorHash> rowMap;
//
//         // Store every row
//         for (const auto& row : grid) rowMap[row]++;
//
//         int count = 0;
//
//         // Build each column
//         for (int j = 0; j < n; j++) {
//             vector<int> col;
//
//             for (int i = 0; i < n; i++) col.push_back(grid[i][j]);
//
//             count += rowMap[col];
//         }
//
//         return count;
//     }
// };

int main(int argc, char* argv[]) {
    vector<vector<int>> grid = {{3, 2, 1}, {1, 7, 6}, {2, 7, 7}};

    Solution sol;
    int result = sol.equalPairs(grid);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
