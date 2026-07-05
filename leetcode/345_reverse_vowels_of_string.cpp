#include <iostream>
#include <string>
#include <vector>

using std::vector, std::string;

bool isVowel(char c) {
    c = std::tolower(static_cast<unsigned char>(c));

    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

class Solution {
   public:
    string reverseVowels(string s) {
        vector<std::pair<int, char>> v_in_string;
        string output = s;

        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                v_in_string.push_back(std::pair(i, s[i]));
            }
        }

        int left = 0;
        int right = static_cast<int>(v_in_string.size()) - 1;

        while (left <= right) {
            auto item_l = v_in_string[left];
            auto item_r = v_in_string[right];

            output[item_l.first] = item_r.second;
            output[item_r.first] = item_l.second;

            left++;
            right--;
        }

        return output;
    }
};

int main(int argc, char* argv[]) {
    string input = "IcreCreAm";
    Solution sol;

    string output = sol.reverseVowels(input);

    std::cout << "Result: " << output << std::endl;

    return 0;
}
