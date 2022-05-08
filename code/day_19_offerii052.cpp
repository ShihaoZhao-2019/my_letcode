/*
给你一棵二叉搜索树，请 按中序遍历 将其重新排列为一棵递增顺序搜索树，使树中最左边的节点成为树的根节点，并且每个节点没有左子节点，只有一个右子节点
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
//class Solution {
//public:
//    TreeNode* increasingBST(TreeNode* root) {
//        if(root == nullptr) return nullptr;
//        TreeNode *stack[100];
//        int top = -1;
//        TreeNode* p = root;
//        TreeNode* result = (TreeNode*) malloc(sizeof(TreeNode));
//        result->left = nullptr;
//        result->right = nullptr;
//        result->val = 0;
//        TreeNode* q = result;


//        while(p||top>-1)
//        {
//            if(p)
//            {
//                stack[++top] = p;
//                p = p->left;
//            }else
//            {
//                p = stack[top--];
//                TreeNode* s = (TreeNode*) malloc(sizeof(TreeNode));
//                s->left = nullptr;
//                s->right = nullptr;
//                s->val = p->val;
//                q->right = s;
//                q = s;
//                cout<<p->val;
//                p = p->right;
//            }
//        }
//        return result->right;

//    }
//};
