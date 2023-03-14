#include<iostream>
#include<vector>
/**
 * 题目要求反向打印队列
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    std::vector<int> reversePrint(ListNode* head) {
       std::vector<int> result;
        recur(result,head);
        return result;
    }

    void recur(std::vector<int> &result,ListNode* head)
    {
        if(head == nullptr)return;
        recur(result,head->next);
        result.push_back(head->val);
    }
};

int main()
{

    return 0;
}

/*
思路:
    递归
*/