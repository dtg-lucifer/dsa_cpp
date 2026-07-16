#include <cctype>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>

using std::stack, std::string;

class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> strings;

        string currentString = "";
        int currentNumber = 0;

        for (char c : s) {
            if (isdigit(c)) {
                // Build multi-digit number
                currentNumber = currentNumber * 10 + (c - '0');
            } else if (c == '[') {
                // Save current context
                counts.push(currentNumber);
                strings.push(currentString);

                // Reset for new substring
                currentNumber = 0;
                currentString = "";
            } else if (c == ']') {
                int repeat = counts.top();
                counts.pop();

                string previous = strings.top();
                strings.pop();

                while (repeat--) {
                    previous += currentString;
                }

                currentString = previous;
            } else {
                // Normal character
                currentString.push_back(c);
            }
        }

        return currentString;
    }
};

int main(int argc, char* argv[]) {
    string s = "3[a]2[bc]";

    Solution sol;
    string result = sol.decodeString(s);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
