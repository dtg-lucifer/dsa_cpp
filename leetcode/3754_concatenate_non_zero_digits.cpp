#include <iostream>

class Solution {
   public:
    long long sumAndMultiply(int num) {
        long long result = 0;
        long long sum = 0;

        int divisor = 1;
        long long temp = num;

        // Find highest power of 10
        while (temp >= 10) {
            divisor *= 10;
            temp /= 10;
        }

        while (divisor > 0) {
            int digit = num / divisor;
            num %= divisor;
            divisor /= 10;

            if (digit != 0) {
                result = result * 10 + digit;
            }
        }

        temp = result;

        while (temp > 0) {
            int d = temp % 10;
            sum += d;
            temp /= 10;
        }

        return result * sum;
    }
};

int main(int argc, char* argv[]) {
    int n = 10203004;

    Solution sol;
    int result = sol.sumAndMultiply(n);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
