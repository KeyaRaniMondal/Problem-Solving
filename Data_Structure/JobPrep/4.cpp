class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i; j < nums.size(); ++j) {
                int sum = 0;
                for (int k = i; k <= j; ++k)
                    sum += nums[k];
                max_sum = max(max_sum, sum);
            }
        }
        return max_sum;
    }
};

// gives tle : O(n^3) time complexity


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        for (int i = 0; i < nums.size(); ++i) {
               int sum = 0;
            for (int j = i; j < nums.size(); ++j) {
                    sum += nums[j];
                max_sum = max(max_sum, sum);
            }
        }
        return max_sum;
    }
};

// O(n^2) improvement (remove inner k-loop, accumulate as j increases



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    if (nums.empty()) return 0;
    int current = nums[0], max_sum = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        current = max(nums[i], current + nums[i]);
        max_sum = max(max_sum, current);
    }
    return max_sum;
}
};

// Kadane: Time O(n), Space O(1).