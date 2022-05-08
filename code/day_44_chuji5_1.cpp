/*
给你一个二叉树的根节点 root ，判断其是否是一个有效的二叉搜索树。
*/


//class Solution {
//public:
//    int flag=0;
//    void middle(TreeNode *root,int &pre,int &result)
//    {
//       if(root==nullptr) return;
//       middle(root->left,pre,result);
//       if(root->val<=pre) result=0;
//       if(flag==0)
//       {
//          result = 1;
//          flag=1;
//        }
//       pre = root->val;
//       if(result)
//         middle(root->right,pre,result);
//    }
//    bool isValidBST(TreeNode* root) {
//       if(root==nullptr)return 1;
//       if(root->left==nullptr&&root->right==nullptr)
//           return 1;

//       int result=1;
//       int pre;
//       middle(root,pre,result);
//       return result;
//    }
//};
