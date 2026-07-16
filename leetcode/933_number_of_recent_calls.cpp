#include <iostream>
#include <queue>

using std::queue;

class RecentCounter {
private:
    queue<int> counter;

public:
    RecentCounter() { this->counter = queue<int>(); }

    int ping(int t) {
        counter.push(t);

        int range_start = t - 3000;

        // count the requests that come under
        // the range_start and range_end
        while (!counter.empty() && counter.front() < range_start) {
            counter.pop();
        }

        return counter.size();
    }
};

int main(int argc, char* argv[]) {
    RecentCounter* obj = new RecentCounter();
    int param_1 = obj->ping(1);
    int param_2 = obj->ping(100);
    int param_3 = obj->ping(3001);
    int param_4 = obj->ping(3002);

    std::cout << "Result: ";
    std::cout << param_1 << " ";
    std::cout << param_2 << " ";
    std::cout << param_3 << " ";
    std::cout << param_4 << " ";
    std::cout << std::endl;

    return 0;
}
