#include <climits>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::vector, std::string, std::stringstream;

class Solution {
   public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;  // where to write
        int i = 0;      // read pointer

        while (i < n) {
            char current = chars[i];
            int count = 0;

            // count occurrences
            while (i < n && chars[i] == current) {
                i++;
                count++;
            }

            // write character & increment write pointer
            chars[write] = current;
            write++;

            // write count if > 1
            if (count > 1) {
                string cnt = std::to_string(count);
                for (char c : cnt) {
                    // write each digit of the count & increment the write pointer
                    chars[write] = c;
                    write++;
                }
            }
        }

        return write;
    }
};

int main(int argc, char* argv[]) {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    Solution sol;
    int result = sol.compress(chars);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
