/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 *
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (65.51%)
 * Likes:    12600
 * Dislikes: 418
 * Total Accepted:    4.3M
 * Total Submissions: 6.5M
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * Given two strings s and t, return true if t is an anagram of s, and false
 * otherwise.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s = "anagram", t = "nagaram"
 * 
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "rat", t = "car"
 * 
 * Output: false
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length, t.length <= 5 * 10^4
 * s and t consist of lowercase English letters.
 * 
 * 
 * 
 * Follow up: What if the inputs contain Unicode characters? How would you
 * adapt your solution to such a case?
 * 
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp; 

        for(int i = 0 ; i < s.length() ; i++)
        {
            mp[s[i]]++; 
        }

        for(int i = 0 ; i < t.length() ; i++)
        {
            char val = t[i]; 

            if(mp.find(val)!=mp.end()){
                mp[val]--; 
                if(mp[val]==0) mp.erase(val); 
            }

            else return false; 
        }

        if(mp.size()>0) return false; 
        return true; 
    }
};
// @lc code=end

