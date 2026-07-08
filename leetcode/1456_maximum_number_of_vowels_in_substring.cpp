#include <algorithm>
#include <cctype>
#include <cstring>
#include <iostream>
#include <string>

using std::string;

class Solution {
   public:
    int maxVowels(string s, int k) {
        int count = 0, max_count = 0;

        // process first window
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) count++;
        }

        max_count = count;

        // slide the window
        for (int i = k; i < s.length(); i++) {
            // remove left char
            if (isVowel(s[i - k])) count--;

            // add right char
            if (isVowel(s[i])) count++;

            max_count = std::max(max_count, count);
        }

        return max_count;
    }

   private:
    bool isVowel(char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }
};

int main(int argc, char* argv[]) {
    string s = "abciiidef";
    int k = 3;

    Solution sol;
    int result = sol.maxVowels(s, k);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
