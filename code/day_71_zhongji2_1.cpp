/*
两数相加
给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。

请你将两个数相加，并以相同形式返回一个表示和的链表。

你可以假设除了数字 0 之外，这两个数都不会以 0 开头。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xvw73v/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
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
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        int up = 0;
//        ListNode* q = new ListNode(0);
//        ListNode* result = q;
//        while(l1||l2)
//        {
//            if(l1&&l2)
//            {
//                up = l1->val+l2->val + up;
//                l1->val = up%10;
//                up/=10;
//                q->next = l1;
//                q = q->next;
//                l1 = l1->next;
//                l2 = l2->next;
//            }
//            else if(l1)
//            {
//                up += l1->val;
//                l1->val = up%10;
//                up/=10;
//                q->next = l1;
//                q = q->next;
//                l1 = l1->next;
//            }
//            else
//            {
//                up += l2->val;
//                l2->val = up%10;
//                up/=10;
//                q->next = l2;
//                q = q->next;
//                l2 = l2->next;
//            }
//        }
//        if(up)
//        {
//            ListNode* s = new ListNode(0);
//            q->next = s;
//            q = q->next;
//            s->val = up;
//        }
//        q->next = nullptr;
//        return result->next;
//    }
//};
