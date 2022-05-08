/*
给定两个单链表的头节点 headA 和 headB ，请找出并返回两个单链表相交的起始节点。如果两个链表没有交点，返回 null 。
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 *ListNode的构造函数，如果你调用一个ListNode(5)，那么构造函数就把val设置成5，next设置成NULL
 */
//class Solution {
//public:
//    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

//        ListNode *p = headA;
//        ListNode *q = headB;
//        int lengthA = 0;
//        int lengthB = 0;
//        while(headA!=NULL)
//        {
//            lengthA ++;
//            headA = headA->next;
//        }
//        while(headB!=NULL)
//        {
//            lengthB ++;
//            headB = headB->next;
//        }
//        headA = p;
//        headB = q;
//        if(lengthA>lengthB){for(int i = 0;i<lengthA-lengthB;i++)headA = headA->next;}
//        else{for(int i = 0;i<lengthB-lengthA;i++) headB = headB->next;}

//        ListNode *result = NULL;
//        while(headA!=NULL&&headB!=NULL)
//        {
//            if(headA==headB)
//            {
//                result = headA;
//                break;
//            }
//            headA = headA->next;
//            headB = headB->next;

//        }

//        return result;



//    }
//};
