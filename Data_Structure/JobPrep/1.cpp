// Problem: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
};

// Time complexity: O(n²) in the worst and average case (two nested loops scanning all pairs).

// Best-case: O(1) if the pair is found immediately.
// Space complexity: O(1) extra space (ignoring the constant-size output vector of two indices).


#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < (int)nums.size(); ++i) {
            int complement = target - nums[i];
            auto it = seen.find(complement);
            if (it != seen.end()) {
                return {it->second, i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};


// Replaced the nested-loop twoSum with a one-pass hash-map approach:
// Time complexity: O(n) ✅
// Space complexity: O(n) ✅