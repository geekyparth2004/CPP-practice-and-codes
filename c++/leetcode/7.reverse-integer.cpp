/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 *
 * https://leetcode.com/problems/reverse-integer/description/
 *
 * algorithms
 * Medium (29.31%)
 * Likes:    13658
 * Dislikes: 13690
 * Total Accepted:    3.7M
 * Total Submissions: 12.6M
 * Testcase Example:  '123'
 *
 * Given a signed 32-bit integer x, return x with its digits reversed. If
 * reversing x causes the value to go outside the signed 32-bit integer range
 * [-2^31, 2^31 - 1], then return 0.
 * 
 * Assume the environment does not allow you to store 64-bit integers (signed
 * or unsigned).
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: x = 123
 * Output: 321
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: x = -123
 * Output: -321
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: x = 120
 * Output: 21
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * -2^31 <= x <= 2^31 - 1
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int rev = 0; 
        while(x>0){
            if (rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            rev = rev*10 + x%10; 
            x = x/10; 
        }        

        if(x<0) rev = rev * (-1);
        return rev; 
    }
};
// @lc code=end

