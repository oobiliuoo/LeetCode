/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <unordered_map>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ret;
        for(int i=0;i<nums.size();++i){
            auto it = ret.find(target-nums[i]);
            if(it!=ret.end()){
                return {it->second,i};
            }
            ret[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

