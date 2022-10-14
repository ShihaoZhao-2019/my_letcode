/*
二叉树的前序遍历
给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> pre_order;
        stack<TreeNode *> my_stack;
        TreeNode *p = root;
        while(p!= nullptr || my_stack.empty() == false)
        {
            if(p!=nullptr)
            {
                pre_order.push_back(p->val);
                my_stack.push(p);
                p = p->left;
            }else
            {
                p = my_stack.top();
                my_stack.pop();
                p = p->right;
            }
        }
        return pre_order;
    }
};
