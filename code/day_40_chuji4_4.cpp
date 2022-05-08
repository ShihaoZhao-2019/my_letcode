/*
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。

*/


//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        if(l1 == nullptr)
//        return l2;
//        if(l2 == nullptr)
//        return l1;
//        ListNode*p = l1;
//        ListNode*q = l2;
//        ListNode*head;
//        ListNode*r;
//        if(p->val<q->val)
//        {
//            head = p;
//            p = p->next;
//        }else
//        {
//            head = q;
//            q = q->next;
//        }
//        r = head;
//        while(p&&q)
//        {
//            if(p->val<q->val)
//            {
//                r->next = p;
//                r = p;
//                p = p->next;

//            }else
//            {
//                r->next = q;
//                r = q;
//                q = q->next;
//            }
//        }
//        while(p)
//        {
//            r->next = p;
//            r = p;
//            break;

//        }
//        while(q)
//        {
//            r->next = q;
//            r = q;
//            break;
//        }
//        // r->next = nullptr;
//        return head;
//    }
//};
