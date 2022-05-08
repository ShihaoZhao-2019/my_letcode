/*
给你一个单链表的头节点 head ，请你判断该链表是否为回文链表。如果是，返回 true ；否则，返回 false 。
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
//    bool isPalindrome(ListNode* head) {
//        if(head == nullptr ||head->next == nullptr)return 1;
//        ListNode * p = head;
//        ListNode * q = head->next;
//        if(q->next==nullptr)
//        {
//            return p->val==q->val;
//        }
//        //快慢指针找中间结点
//        int nextFlag = 1;
//        while(q)
//        {
//            p = p->next;
//            q = q->next;
//            if(q==nullptr)
//            {
//                nextFlag = 0;
//                break;
//            }
//            else q = q->next;

//        }
//        if(nextFlag)p = p->next;
//        q = reverseList(p);
//        p = head;
//        int result = 1;
//        while(p&&q)
//        {
//            if(p->val!=q->val)
//            {
//                result = 0;
//                break;
//            }else
//            {
//                p = p->next;
//                q = q->next;
//            }
//        }
//    return result;
//    }
//};
