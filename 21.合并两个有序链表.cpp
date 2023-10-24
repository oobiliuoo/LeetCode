/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    // ListNode* mergeTwoLists1(ListNode* list1, ListNode* list2) {
    //     //ListNode* d = ret;
    //     ListNode d;
    //     ListNode* ret = &d;
    //     while (1) {
    //         if (list1 == nullptr) {
    //             ret->next = list2;
    //             return d.next; // 返回合并后的链表，跳过头节点
    //         } else if (list2 == nullptr) {
    //             ret->next = list1;
    //             return d.next; // 返回合并后的链表，跳过头节点
    //         } else if (list1->val < list2->val) {
    //             ret->next = list1;
    //             list1 = list1->next;
    //         } else {
    //             ret->next = list2;
    //             list2 = list2->next;
    //         }
    //         ret = ret->next;
    //     }
    // }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr)
            return list2;
        if(list2 == nullptr)
            return list1;

        if(list1->val<list2->val){
            list1->next = mergeTwoLists(list1->next,list2);
            return list1;
        }
        list2->next = mergeTwoLists(list1,list2->next);
        return list2;
    }
};
// @lc code=end

