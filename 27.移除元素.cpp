/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int p = 0;
        int q = nums.size();

        while(p<q){
            if(nums[p] == val){
                nums[p] = nums[q-1];
                --q;
            }else
                ++p;
        }

        return q;
    }
};
// @lc code=end

