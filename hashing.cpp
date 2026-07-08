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


/*
Two sum problem:- find the sum of the targeted element in the vector and return their indices
Optimal approach:-here unordered map is used to store the elements of the vector along with their indices
example:-
1. enter the {m[nums[i]],i }in the hash if it is not in the m(ie. map)
2. then,find the other=target-nums[i] in the map
it is stored like this:
2->0
7->1
11->2
15->3 
*/