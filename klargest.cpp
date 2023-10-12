#include <vector>
#include <queue>
using namespace std;
int kth_largest(vector<int> values, int k) {
    priority_queue<int> vals;

    for (auto i = 0; i < values.size(); i++) {
        vals.push(values[i]);
    }

    for (int i = 0; i < k - 1; i++) {
        vals.pop();
    }

    return vals.top();

}