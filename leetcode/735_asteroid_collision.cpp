#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>

using std::stack, std::vector;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int a : asteroids) {
            bool alive = true;

            // Collision is only possible when:
            // stack top is moving right (+)
            // current asteroid is moving left (-)
            while (alive && !st.empty() && st.top() > 0 && a < 0) {

                // Current asteroid is larger
                if (abs(st.top()) < abs(a)) {
                    st.pop();
                }
                // Both are the same size
                else if (abs(st.top()) == abs(a)) {
                    st.pop();
                    alive = false;
                }
                // Stack asteroid is larger
                else {
                    alive = false;
                }
            }

            // If the current asteroid survived all collisions,
            // push it onto the stack.
            if (alive) {
                st.push(a);
            }
        }

        vector<int> ans(st.size());

        // Stack stores asteroids from left to right,
        // so fill the answer from the back.
        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};

int main(int argc, char* argv[]) {
    vector<int> asteroids = {3, 5, -6, 2, -1, 4};

    Solution sol;
    vector<int> result = sol.asteroidCollision(asteroids);

    std::cout << "Result: ";
    for (int asteroid : result) {
        std::cout << asteroid << " ";
    }
    std::cout << std::endl;

    return 0;
}
