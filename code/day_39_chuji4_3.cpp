/*
给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
*/

//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        // ListNode *first = new ListNode();
//        // first->next = head;
//        if (head == nullptr)
//        return nullptr;
//        if(head->next == nullptr)
//        return head;
//        ListNode *p = head;
//        ListNode *q = p->next;
//        ListNode *r  = q->next;

//        p->next = nullptr;
//        while(r)
//        {
//            q->next = p;
//            p = q;
//            q = r;
//            r = r->next;
//        }
//        q->next = p;
//        return q;

//    }
//};
