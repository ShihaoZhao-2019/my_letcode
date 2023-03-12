#include<iostream>
#include<vector>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:

    int kthLargest(TreeNode* root, int k) {
        int result = 0;
        int now=0;
        in_order(root,k,now,result);
        return result;
    }

    void in_order(TreeNode* root,int &k,int &now,int &result)
    {
        if(root==nullptr) return;
        in_order(root->right,k,now,result);
        now++;
        if(now==k)
        {
            result = root->val;
        }
        if(now<k)
            in_order(root->left,k,now,result);
    }
};
int main()
{
    return 0;       
}


/*
思路:
    知识点1:二叉搜索树中序遍历为有序序列
    知识点2:二叉搜索树中序遍历，改变搜索顺序为右中左得到的序列之前有序序列的reverse
    此算法时间复杂度为n,空间复杂度为1
*/