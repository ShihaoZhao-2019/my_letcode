/*
给定一个链表的 头节点 head ，请判断其是否为回文链表。

如果一个链表是回文，那么链表节点序列从前往后看和从后往前看是相同的。
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
//    ListNode* reverse(ListNode* head)
//    {
//        if(head == nullptr ||head->next==nullptr) return head;
//        ListNode *left = head;
//        ListNode *middle = left->next;
//        head->next = nullptr;
//        ListNode *right = middle->next;
//        while(right)
//        {
//            middle->next = left;
//            left =middle;
//            middle = right;
//            right = right->next;
//        }
//        middle->next = left;
//        return middle;

//    }
//    bool isPalindrome(ListNode* head) {
//        ListNode *p = head;
//        int length = 0;
//        //获取链表长度
//        while(p)
//        {
//            p = p->next;
//            length ++;
//        }
//        p = head;

//        for(int i=0;i<length/2;i++)p = p->next;
//        if(length % 2 != 0) p = p->next;
//        //原地翻转链表
//        p = reverse(p);
//        while(head&&p)
//        {
//            if(head->val!=p->val)break;
//            head = head->next;
//            p = p->next;
//        }
//        if(head&&p) return 0;
//        else return 1;
//    }
//};
