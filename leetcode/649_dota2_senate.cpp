#include <iostream>
#include <queue>
#include <string>

using std::queue, std::string;

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> radiant;
        queue<int> dire;

        int n = senate.length();

        // Store the indices of each senator
        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R')
                radiant.push(i);
            else
                dire.push(i);
        }

        // Simulate the voting rounds
        while (!radiant.empty() && !dire.empty()) {
            int r = radiant.front();
            int d = dire.front();

            radiant.pop();
            dire.pop();

            if (r < d) {
                // Radiant acts first
                radiant.push(r + n);
            } else {
                // Dire acts first
                dire.push(d + n);
            }
        }

        return radiant.empty() ? "Dire" : "Radiant";
    }
};

int main(int argc, char* argv[]) {
    string senate = "RRDDD";

    Solution sol;
    string result = sol.predictPartyVictory(senate);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
