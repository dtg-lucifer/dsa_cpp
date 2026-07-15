#include <algorithm>
#include <iostream>
#include <stack>

using std::stack, std::string;

class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for (char c : s) {
            if (c != '*')
                st.push(c);
            st.pop();
        }

        string output;
        while (!st.empty()) {
            char c = st.top();
            output.push_back(c);

            st.pop();
        }

        std::reverse(output.begin(), output.end());

        return output;
    }
};

int main(int argc, char* argv[]) {
    string s = "leet**cod*e";
    int k = 5;

    Solution sol;
    string result = sol.removeStars(s);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
