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
    void backOrderTree(TreeNode* &root,vector<int>& to_delete,vector<TreeNode *> &result){
        if(root == nullptr)return;
        if(to_delete.size()==0)return;
        backOrderTree(root->left,to_delete,result);
        backOrderTree(root->right,to_delete,result);
        int i=0;
        
        for(;i<to_delete.size();i++){
            if(root->val==to_delete[i])break;
        }
        if(i>=to_delete.size())return;
        swap(to_delete[i],to_delete[to_delete.size()-1]);
        to_delete.pop_back();
        
        if(root->left!=nullptr)result.push_back(root->left);
        if(root->right!=nullptr)result.push_back(root->right);
        root = nullptr;

    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {      
        vector<TreeNode*> result;
        if(root==nullptr)return result;
        backOrderTree(root,to_delete,result);
        if(root!=nullptr)result.push_back(root);
        return result;
    }
};
