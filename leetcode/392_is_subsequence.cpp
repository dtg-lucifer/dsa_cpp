#include <climits>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::vector, std::string, std::stringstream;

class Solution {
   public:
    bool isSubsequence(string s, string t) {
        bool result = true;

        if (s == t) {
            return true;
        }

        int sp{0}, tp{0};
        while (sp < s.size() && tp < t.size()) {
            if (s[sp] == t[tp]) {
                sp++;
            }

            tp++;
        }

        return sp == s.size();
    }
};

int main(int argc, char* argv[]) {
    string s = "abc";
    string t = "ahbgdc";

    Solution sol;
    int result = sol.isSubsequence(s, t);

    std::cout << "Result: " << (result ? "true" : "false") << std::endl;

    return 0;
}
