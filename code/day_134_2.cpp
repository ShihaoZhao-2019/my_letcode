/*
82. 删除排序链表中的重复元素 II
给定一个已排序的链表的头 head ， 删除原始链表中所有重复数字的节点，只留下不同的数字 。返回 已排序的链表 。
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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)return nullptr;
        if(head->next == nullptr)return head;
        ListNode* Head = new ListNode(-1);
        Head->next  = head;
        int beginFlag = 0;
        while(Head->next->next){
            if(Head->next->val==Head->next->next->val){
                while(Head->next->next&&(Head->next->val==Head->next->next->val)){
                    Head->next = Head->next->next;
                }
                Head->next = Head->next->next;
                //现在的head还不安全
                if(beginFlag==0){
                    head = Head->next;
                }
                if(Head->next==nullptr)break;
            }
            else{
                Head = Head->next;
                beginFlag = 1;
            }
        }
        return head;
    }
};
