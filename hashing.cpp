#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twosum(vector<int> nums, int target) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
        int other = target - nums[i];
        if (m.find(other) != m.end()) {
            return {i, m[other]};
        }
        m[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twosum(nums, target);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
