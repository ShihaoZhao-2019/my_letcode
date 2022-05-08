/*
给定单链表的头节点 head ，请反转链表，并返回反转后的链表的头节点。
*/

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
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        ListNode* left = head;
//        if(!left||!left->next) return left;
//        ListNode* middle = head->next;
//        head->next = nullptr;
//        ListNode* right;

//        while(middle->next)
//        {

//            right = middle->next;
//            middle->next = left;
//            left = middle;
//            middle = right;
//        }

//        middle->next = left;
//        return middle;


//    }
//};
