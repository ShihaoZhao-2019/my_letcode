/*
给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。如果两个链表不存在相交节点，返回 null 。
*/

//class Solution {
//public:
//    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//        if(headA==NULL||headB==NULL) return NULL;
//        int lengthA = 0;
//        int lengthB = 0;
//        int err = 0;
//        ListNode *p = headA;
//        ListNode *q = headB;
//        while(p)
//        {
//            lengthA++;
//            p=p->next;
//        }
//        while(q)
//        {
//            lengthB++;
//            q=q->next;
//        }
//        if(lengthA>lengthB)
//        {
//            p = headA;
//            q = headB;
//            err = lengthA-lengthB;
//        }else
//        {
//            p = headB;
//            q = headA;
//            err = lengthB-lengthA;
//        }

//        while(err--) p = p->next;
//        while(p&&q&&p!=q)
//        {
//            p = p->next;
//            q = q->next;
//        }
//        if(p==q)return p;
//        return NULL;

//    }
//};
