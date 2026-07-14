// Valid Anagram
// An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

class Solution {
public:
    bool isAnagram(string s, string t) {
        string dup_t = t;
        sort(s.begin(), s.end());
        sort(dup_t.begin(), dup_t.end());
        if (s==t || (s == dup_t && t != dup_t))
            return true ;
        else 
            return false;
    }
};


// Current implementation (with dup_t and two sorts):
// Time: O(n log n) (sorting dominates)
// Space: O(n) extra (copy dup_t) + O(log n) stack for sort