/*

给定一个单链表，把所有的奇数节点和偶数节点分别排在一起。请注意，这里的奇数节点和偶数节点指的是节点编号的奇偶性，而不是节点的值的奇偶性。

请尝试使用原地算法完成。你的算法的空间复杂度应为 O(1)，时间复杂度应为 O(nodes)，nodes 为节点总数。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xvdwtj/
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
//    ListNode* oddEvenList(ListNode* head) {
//       if(!head||!head->next) return head;
//       ListNode *finOrigin = head;
//       int length = 1;
//       ListNode *finOriginPre;
//       while(finOrigin->next)
//       {
//            finOriginPre = finOrigin;
//            finOrigin = finOrigin->next;
//            length++;
//       }
//       if(length%2==0) finOrigin = finOriginPre;

//       ListNode *finNow = finOrigin;
//       ListNode *p = head;
//       while(p!= finOrigin&&p->next != finOrigin)
//       {
//           ListNode *s = p->next;
//           p->next = s->next;
//           p = p->next;
//           s->next = finNow->next;
//           finNow->next = s;
//           finNow = s;

//       }
//       return head;
//    }
//};
