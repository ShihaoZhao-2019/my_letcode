/*
给定一棵树的前序遍历 preorder 与中序遍历  inorder。请构造二叉树并返回其根节点。
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
//    TreeNode* buildMyTree(vector<int>& preorder, vector<int>& inorder,int pLeft,int pRight,int iLeft,int iRight){
//        TreeNode *root;
//        if(pLeft>pRight) return nullptr;
//        else{
//            root = new TreeNode(0);
//            root->val = preorder[pLeft];
//            int rootIndex = iLeft;
//            while(inorder[rootIndex] != root->val)rootIndex++;
//            int indexErr = rootIndex - iLeft;
//            root->left = buildMyTree(preorder,inorder,pLeft+1,pLeft+indexErr,iLeft,rootIndex-1);
//            root->right = buildMyTree(preorder,inorder,pLeft+indexErr+1,pRight,rootIndex+1,iRight);
//        }
//        return root;
//    }
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        return buildMyTree(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
//    }
//};
