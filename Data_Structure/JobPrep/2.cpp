//  Contains Duplicate
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>distinct;
        for(auto n:nums)
        distinct.insert(n);
        if(distinct.size()==nums.size())
        return false;
        else
        return true;
    }
};


// Time complexity

// O(n log n) — inserting each of the n elements into a balanced BST (std::set) costs O(log n) per insert, and the loop does n inserts.
// Space complexity

// O(n) — in the worst case all elements are distinct, so the set stores up to n elements.