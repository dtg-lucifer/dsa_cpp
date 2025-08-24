#include <iostream>
#include <vector>

class Solution {
   public:
    std::vector<std::string> removeSubfolders(std::vector<std::string>& folder) {
        std::vector<std::string> clean_f;

        for (auto f : folder) {
        }

        return clean_f;
    }
};

int main() {
    Solution sol;
    std::vector<std::string> folders;

    auto out = sol.removeSubfolders(folders);

    for (auto f : out) {
        std::cout << f << ",";
    }

    std::cout << std::endl;
}
