/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1; // 指向 nums1 的尾部
        int p2 = n - 1; // 指向 nums2 的尾部
        int p = m + n - 1; // 合并后的数组尾部

        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

        // 如果 nums2 中还有剩余的元素，复制到 nums1 中
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }

    }
};
// @lc code=end

