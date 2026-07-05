#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        string out = "";
        int i = 0, j = 0;
        // find out which string is larger
        int larger = max(word1.size(), word2.size());

        while (larger >= 0) {
            if (i < word1.size()) {
                out += word1[i];
                i++;
            }
            if (j < word2.size()) {
                out += word2[j];
                j++;
            }
            larger--;
        }

        return out;
    }
};

int main() {
    Solution sol;

    string word1 = "abc", word2 = "pqr";
    cout << sol.mergeAlternately(word1, word2) << endl;

    return 0;
}
