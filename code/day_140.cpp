/*
给你一棵二叉树的根节点 root ，返回其节点值的 后序遍历 。
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> post_order;
        stack<TreeNode* > fake_s;
        TreeNode* p = root;
        TreeNode* last = root;
        while(p!=nullptr || fake_s.empty()==false)
        {
            if(p!=nullptr)
            {
                fake_s.push(p);
                p = p->left;
            }else
            {
                p = fake_s.top();
                if(p->right != nullptr && p->right!= last)
                {
                    p = p->right;
                    fake_s.push(p);
                    p = p->left;
                }else
                {
                    post_order.push_back(p->val);
                    fake_s.pop();
                    last = p;
                    p = nullptr;
                }
            }
        }
        return post_order;
    }
};