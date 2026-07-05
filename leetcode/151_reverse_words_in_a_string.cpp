#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::vector, std::string;

class Solution {
   public:
    string reverseWords(string s) {
        vector<string> words;

        this->trimWhiteSpace(s);

        std::stringstream ss(s);
        std::stringstream os;

        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        for (int i = words.size() - 1; i >= 0; i--) {
            os << words[i];
            if (i != 0) os << " ";
        }

        return os.str();
    }

   private:
    void trimWhiteSpace(string& s) {
        std::stringstream os;

        char last = '\0';
        for (int i = 0; i < s.size(); i++) {
            if (last == ' ' && s[i] == ' ') continue;

            os << s[i];

            last = s[i];
        }

        s = os.str();
    }
};

int main(int argc, char* argv[]) {
    string input = "the sky     is blue   ";
    Solution sol;

    string output = sol.reverseWords(input);

    std::cout << "Result: " << output << std::endl;

    return 0;
}
