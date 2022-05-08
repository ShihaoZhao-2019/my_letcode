/*
给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。
进阶：你能尝试使用一趟扫描实现吗？
*/


///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode *p = head;
//        int length = 0;
//        while(p)
//        {
//            p = p->next;
//            length++;
//        }
//        if (length == 1 && n ==1)
//            return nullptr;
//        if(length == n)
//            return head->next;
//        p = head;
//        for(int i = 0;i<length-n-1;i++)p = p->next;
//        ListNode *q = p->next;
//        p->next = q->next;
//        free(q);
//        return head;
//    }
//};
