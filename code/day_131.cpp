/*
面试题 04.06. 后继者
设计一个算法，找出二叉搜索树中指定节点的“下一个”节点（也即中序后继）。

如果指定节点没有对应的“下一个”节点，则返回null。
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    //非递归
    TreeNode* inorderSuccessor2(TreeNode* root, TreeNode* p) {
        vector<TreeNode*>stack;
        TreeNode *q = root;
        bool flag = 0;
        while(stack.size()>0||q){
            if(q){
                stack.push_back(q);
                q = q->left;
            }else{
                q = stack.back();
                if(flag)break;
                if(p==q)flag = 1;
                // cout<<q->val;
                stack.pop_back();
                q = q->right;
            }
        }
    return q;
    }
    //递归
    TreeNode* midOrderTree(TreeNode* root, TreeNode* p,int &flag){
        if(root == NULL)return NULL;
        TreeNode* q1 = midOrderTree(root->left,p,flag);
        if(q1)return q1;
        if(flag)return root;
        if(root == p)flag = 1;
        return midOrderTree(root->right,p,flag);
    }
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        int flag = 0;
        return midOrderTree(root,p,flag);
    }
};
