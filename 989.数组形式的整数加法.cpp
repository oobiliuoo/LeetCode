/*
 * @lc app=leetcode.cn id=989 lang=cpp
 *
 * [989] 数组形式的整数加法
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        vector<int> r;
        int i=num.size()-1;
        int a = 0;
        while(i>=0 || k>=1){
            int x = (i>=0) ? num[i] : 0;
            int y = (k>=1) ? k%10 : 0;
            int sum = x + y + a;
            a = sum / 10;
            r.push_back(sum%10);
            if(i>=0)    i--;
            if(k>=1) k = (k - k%10)/10;
        }

        if(a>0)
            r.push_back(a);

        std::reverse(r.begin(),r.end());
        return r;

    }
};
// @lc code=end

