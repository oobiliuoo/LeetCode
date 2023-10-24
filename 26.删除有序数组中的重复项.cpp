/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

#include <unordered_map>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)
            return n;

        int show=1;
        int fast=1;
        while(fast<n){
            if(nums[fast]!=nums[fast-1]){
                nums[show] = nums[fast];
                show++;
            }
            fast++;
        }
        return show;
    }
};
// @lc code=end

