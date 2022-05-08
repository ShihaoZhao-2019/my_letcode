/*
给定一个二叉树，找出其最大深度。

二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。

说明: 叶子节点是指没有子节点的节点。
*/

//class Solution {
//public:
//    int maxDepth(TreeNode* root) {
//        if(root == nullptr)
//        return 0;
//        int leftDepth = maxDepth(root->left);
//        int RightDepth = maxDepth(root->right);
//        int depth = leftDepth>RightDepth?leftDepth+1:RightDepth+1;
//        return depth;
//    }
//};
