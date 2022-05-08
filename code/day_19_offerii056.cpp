/*
给定一个二叉搜索树的 根节点 root 和一个整数 k , 请判断该二叉搜索树中是否存在两个节点它们的值之和等于 k 。假设二叉搜索树中节点的值均唯一。
*/

///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//#include <ext/hash_map>
//using namespace __gnu_cxx;
//using namespace std;

//class Solution {
//public:
//    hash_map<int,int> map;
//    int index = 0;
//    int result =0;
//    void Inorder(TreeNode* root,int k)
//    {
//        if(root==nullptr || result)
//        return;
//        Inorder(root->left,k);
//        int sub = k-root->val;
//        if(map.find(sub)==map.end()) map[root->val] = index++;
//        else result = 1;
//        Inorder(root->right,k);
//    }
//    bool findTarget(TreeNode* root, int k) {
//        Inorder(root,k);
//        return result;
//    }
//};
